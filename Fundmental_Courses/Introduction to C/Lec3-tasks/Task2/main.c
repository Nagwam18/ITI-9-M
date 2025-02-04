#include <stdio.h>
#include <stdlib.h>
#define size 5

int main()
{
  int arr[size];

  printf("Enter  5 numbers \n");
  for (int i=0;i<size;i++)
  { _flushall();
    scanf("%d",&arr[i]);

  }
    printf("The Numbers You Enter are:\n");
    for(int i = 0; i <size; i++) {
     printf("%d\n", arr[i]);
  }
   int curr=arr[0];

   printf("The max number you Entered is:  \n");
    for (int i=0;i<size;i++)
    {
        if(curr<arr[i])
           curr=arr[i];
    }

     printf("Max Number = %d",curr);

    return 0;
}
