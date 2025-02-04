#include <iostream>
#include<string.h>
using namespace std;
class emp{
 public:
 int id;
 int age;
 char name[30];

 void set_id(int _id)
 {      id=_id;

 }
 int get_id()
 {
    return id;
 }

 void set_age(int _age)
 {
     if (_age>=30 && _age<=60)
        {
            age=_age;
        }
     else
        {
        cout<<"invalied age"<<endl;
     }
 }

 int get_age()
 {
     return age;
 }

 void set_name(char *_name)
 {
   strcpy(name,_name);

 }

 char* get_name(){
   return name;
 }
};
int main()
{
   //emp e1;
   emp* ptr=new emp;
   int i,a;
   char c[30];
   cout<<"Enter Employee Id"<<endl;
   cin>>i;
   ptr->set_id(i);

   cout<<"Enter Employee Age"<<endl;
   cin>>a;
   ptr->set_age(a);

   cout<<"Enter Employee Name"<<endl;
   cin>>c;
   ptr->set_name(c);

   cout<<"Employee Id"<<ptr->get_id()<<endl;
   cout<<"Employee Age"<<ptr->get_age()<<endl;
   cout<<"Employee name"<<ptr->get_name()<<endl;

   delete ptr;





    return 0;
}
