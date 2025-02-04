#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <string.h>

void gotoxy(int column, int line) {
    COORD coord;
    coord.X = column;
    coord.Y = line;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void textattr(int i) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}

struct emp {
    int id;
    char name[30];
    int Age;
};

int main() {
    char ch;
    char list[30][30] = {"New List", "Display All", "Display by ID", "Exit"};
    int i;
    int n = 0;
    int flag = 0;
    int size;
    int count = 0;

    printf("Enter the Number of Employees: ");
    scanf("%d", &size);

    struct emp *ptr = (struct emp *)malloc(size * sizeof(struct emp));

    for (i = 0; i < size; i++) {
        ptr[i].id = -1;
    }

    do {
        system("cls");
        for (i = 0; i < 4; i++) {
            gotoxy(12, i + 15);
            if (i == n) {
                textattr(0x09);
            }
            _cprintf("%s", list[i]);
            textattr(0x07);  // reset attribute
        }

        ch = _getch();
        switch (ch) {
            case -32:  // Arrows
                ch = _getch();
                if (ch == 72) {  // Up
                    n--;
                    if (n < 0) n = 3;
                } else if (ch == 80) {  // Down
                    n++;
                    if (n > 3) n = 0;
                }
                break;

            case 27:  // ESC
                flag = 1;
                break;

            case 13:  // Enter
                system("cls");

                if (n == 0) {  // New List
                    if (count < size) {
                        int id, duplicate = 0;
                        int index;
                        printf("Enter Employee Index from 0 to %d): ", size - 1);
                        scanf("%d", &index);

                        for (i = 0; i < count; i++) {
                            if (ptr[i].id == id) {
                                duplicate = 1;
                                break;
                            }
                        }

                         if (duplicate) {
                            printf("Duplicate ID");
                        }

                         else{
                            printf("Enter the Employee ID: ");
                            scanf("%d", &ptr[index].id);
                            printf("Enter the Employee Name: ");
                            scanf(" %[^\n]%*c", ptr[index].name);
                            printf("Enter the Employee Age: ");
                            scanf("%d", &ptr[index].Age);
                            count++;}
                    }else {
                        printf("Out Of Range index!\n");
                        _getch();
                    }
                    }

                 else if (n == 1) {  // Display All
                    printf("Employee List:\n");
                    for (i = 0; i < size; i++) {
                        if (ptr[i].id != -1) {
                            printf("ID: %d\n", ptr[i].id);
                            printf("Name: %s\n", ptr[i].name);
                            printf("Age: %d\n\n", ptr[i].Age);
                        }
                    }
                    _getch();

                } else if (n == 2) {  // Display  by ID
                    int searchID, found = 0;
                    printf("Enter Employee ID You Want ");
                    scanf("%d", &searchID);

                    for (i = 0; i < size; i++) {
                        if (ptr[i].id == searchID) {
                            printf("ID: %d\n", ptr[i].id);
                            printf("Name: %s\n", ptr[i].name);
                            printf("Age: %d\n", ptr[i].Age);
                            found = 1;
                            break;
                        }
                    }
                    if (!found) {
                        printf("Employee with ID %d not found.\n", searchID);
                    }
                    _getch();

                } else if (n == 3) {  // Exit
                    flag = 1;
                }
                break;
        }}
     while (flag==1);

    free(ptr);
    return 0;
}
