#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3][3];
    int i,j;
    printf("Enter 9 Numbers \n");

     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             scanf("%d",&arr[i][j]);
         }
     }

     printf("The Numbers you Entered is\n",arr[i][j]);

     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             printf("%d\n ",arr[i][j]);
         }
     }


     for(i=0;i<3;i++)
     {
        int sum=0;

         for(j=0;j<3;j++)
         {
            sum=sum+arr[i][j];
         }
         printf("the sum of row %d is %d \n",i+1,sum);
     }




    return 0;
}
