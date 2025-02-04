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
    char name[20];
    int age;
};

int main() {
    char menu[5][60] = {"New", "Display","Display by index","Display by name", "Exit"};
    int i, n = 0;
    char ch;
    int flag = 1;
    int size,counter=0;

    printf("Enter size: ");
    scanf("%d", &size);
    struct emp* ptr = (struct emp*) malloc(size * sizeof(struct emp));


   /* for (i = 0; i < size; i++) {
        ptr[i].id = -1;
    }*/

    do {
        system("cls");
        for (i = 0; i < 5; i++) {
            gotoxy(5, 5 + i);
            if (i == n) {
                textattr(0x04);
            } else {
                textattr(0x07);
            }
            printf("%s", menu[i]);
        }

        ch = _getch();

        switch (ch) {
            case -32:
                ch = _getch();
                if (ch == 72) {
                    n--;
                    if (n < 0)
                        n = 4;
                } else if (ch == 80) {
                    n++;
                    if (n > 4)
                        n = 0;
                }
                break;
            case 13:
                system("cls");
                if (n == 0) {
                        if (counter < size) {
                        int id, duplicate = 0;
                        printf("Enter ID: ");
                        scanf("%d", &id);

                        for (i = 0; i < counter; i++) {
                            if (ptr[i].id == id) {
                                duplicate = 1;
                                break;
                            }
                        }

                        if (duplicate) {
                            printf("Duplicate ID");
                        } else {
                            ptr[counter].id = id;
                            printf("Enter Name: ");
                            scanf("%s", ptr[counter].name);
                            printf("Enter Age: ");
                            scanf("%d", &ptr[counter].age);
                            counter++;
                        }
                    } else {
                        printf("No available size\n");
                    }
                }


                 else if (n == 1) {
                    for (i = 0; i < counter; i++) {
                        if (ptr[i].id != -1) {
                            printf("ID: %d, Name: %s, Age: %d\n", ptr[i].id, ptr[i].name, ptr[i].age);
                        }
                    }
                    _getch();
                }else if(n==2)
                {
                    int x;
                    printf("Enter ID: ");
                    scanf("%d", &x);

                    for(i=0;i<counter;i++)
                    {
                        if(ptr[i].id==x){
                            printf("ID: %d, Name: %s, Age: %d\n", ptr[i].id, ptr[i].name, ptr[i].age);
                            break;
                        }

                    }
                }
                else if(n==3)
                {
                    char n[10];
                    printf("Enter Name: ");
                    scanf("%s",n);
                    for(i=0;i<counter;i++)
                    {
                        if(strcmpi(ptr[i].name,n)==0){
                            printf("ID: %d, Name: %s, Age: %d\n", ptr[i].id, ptr[i].name, ptr[i].age);
                            break;
                        }

                    }

                }
                 else if (n == 4) {
                    printf("Exit selected\n");
                    flag = 0;
                }
                _getch();
                break;
            case 27:
                flag = 0;
                break;
        }
    } while (flag);

    free(ptr);
    return 0;
}
