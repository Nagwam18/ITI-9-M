#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include<conio.h>
#define NULL -32

void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );
  }

    void textattr(int i)
    {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
    }

int main()
{
   char ch;
   char list[10][10]={"New List","Display","Exit"} ;
   int i;
   int n=0;
   int flag=0; //****
    do{
    system("cls");
    for(i=0;i<10;i++)
        {
        gotoxy(12,i+15);
        if(i==n)  {               //new list -->n=0 ,i=0
                                     //   ||
                                  //display -->n=1 ,i=1
                                  //      ||
                                 //exit-->n=2 ,i=2

        textattr(0x09);}

        _cprintf("%s",list[i]);
        textattr(0x08);
        }

      ch=_getch();
      switch(ch)
      {
      case -32:// arrows
          ch=_getch();  //....
        switch (ch){
            case 72://up
                n--;
                if(n<0){
                   n=2;
                }
            break;
            case 80://down
                n++;
                if(n>2){
                    n=0;
                }
                break;
            case 75:  // Left arrow (return to the main menu)
                flag = 0;
                break;
        }
         break;

     case 27://esc
        flag=1;
        break;



    case 13:// Enter
           system("cls");

          if(n==2){
            flag=1;
           }
           else if{
            system("cls");
            for (int i = 0; i < 3; i++) {
            gotoxy(12, i + 15);
            printf("%s",list[n]);
            flag=1;
            _getch();
           }
           break;
      }

     }while(flag==0);




    return 0;

}
