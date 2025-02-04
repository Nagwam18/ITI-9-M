#include <stdio.h>
#include <stdlib.h>

int main()
{    int fact=1;
     int n;

     printf("Enter The Number");
     scanf("%d",&n);

    /*fun fact(n):k
     factorial=n*fact(n-1)*/

    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("the %d is the Factorial  of %d",fact,n);


    return 0;
}
