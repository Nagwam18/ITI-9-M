#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month_num;
    printf("Enter the Month Number");
    scanf("%d", &month_num);

    switch(month_num){
      case 1:
          printf("Month 1 has 31 days.");
          break;
      case 2:
          printf("Month 2 has 28 days.");
          break;

      case 3:
          printf("Month 3 has 31 days.");
          break;

      case 4:
             printf("Month 4 has 30 days.");
             break;

      case 5:
             printf("Month 5 has 31 days.");
             break;

      case 6:
      case 11:
      case 9:

              printf("Month 6 has 30 days.");
              break;

      case 7:
      case 8:
      case 12:
        case 10:
              printf("Month 7 has 30 days.");
              break;


      default:
        printf("Wrong Enter");
        break;
    }














    return 0;
}
