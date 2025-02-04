#include <stdio.h>
#include <stdlib.h>

   struct emp {
       int id;
       char names[20];
       int age;
       float salary;
   } ;


int main()
{

  struct emp e1={0};
  printf("Enter Employee Data \n");
  scanf("%s",e1.names);
  scanf("%d",&e1.id);
 scanf("%d", &e1.age);
 scanf("%f",&e1.salary);

  printf("Employee id: %d\nEmployee NameL: %s\nEmployee Age: %d\nEmployee Salary:%f\n",e1.id,e1.names,e1.age,e1.salary);














    return 0;
}
