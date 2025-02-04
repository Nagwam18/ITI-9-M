#include <stdio.h>
#include <stdlib.h>

int main()
{
   int arr[5]={0};
   int *ptr=arr;


   printf("Enter Numbers:");
   for (int i=0;i<5;i++)
    {
        scanf("\n %d",&arr[i]);

    }

     for (int i=0;i<5;i++)
    {
        printf("\n %d",*(ptr+i));


    }


    return 0;
}
