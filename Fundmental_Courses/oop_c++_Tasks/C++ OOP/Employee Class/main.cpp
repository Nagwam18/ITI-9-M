#include <iostream>
#include<string.h>
using namespace std;
class emp{

 int id;
 int age;
 char name[30];
public:
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
     else{
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



 void fun_print() {
     cout<<"Emoloyee Id :"<<id<<endl;
     cout<<"Emoloyee Age :"<<age<<endl;
     cout<<"Emoloyee Name :"<<name<<endl;

 }


 emp(){
     id=0;
     age=30;
     strcpy(name,"No Name");
     cout<<"First Object created"<<endl;
 }

 emp(int _id){
     id=_id;
     age=30;
     strcpy(name,"Nagwa");
     cout<<"second Object created"<<endl;
 }


 emp(int _age,int _id){
     id=_id;
     age=_age;
     strcpy(name,"Nagwa");
     cout<<"Third Object created"<<endl;
 }

 emp(char* _name){

     id=0;
     age=30;
     strcpy(name,_name);
     cout<<"Fourth Object created"<<endl;
 }

 ~emp(){
 cout<<"The object die"<<endl;

 }
};
int main()
{
   emp e1;
   emp e2("toooot");
   emp e3(40,4);
   emp e4(7);
   e1.fun_print();
   cout<<"**********************"<<endl;
   e2.fun_print();
   cout<<"**********************"<<endl;
   e3.fun_print();
   cout<<"**********************"<<endl;
   e4.fun_print();
   cout<<"**********************"<<endl;



   int i,a;
   char c[30];

   /*cout<<"Enter Employee Id"<<endl;
   cin>>i;
   e1.set_id(i);
   cout<<"Enter Employee Age"<<endl;
   cin>>a;
   e1.set_age(a);
   cout<<"Enter Employee Name"<<endl;
   cin>>c;
   e1.set_name(c);

   cout<<"Employee Id"<<e1.get_id()<<endl;
   cout<<"Employee Age"<<e1.get_age()<<endl;
   cout<<"Employee name"<<e1.get_name()<<endl;*/






    return 0;
}
