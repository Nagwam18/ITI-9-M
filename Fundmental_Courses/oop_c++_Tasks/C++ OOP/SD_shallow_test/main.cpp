#include <iostream>
using namespace std;

class stack_s {
   int* arr;
   int top_s;
   int size;

public:
   stack_s()
   {
    top_s=-1;
    size=5;
    arr=new int[size];
    cout<<"First Constructor"<<endl;
    }

   stack_s(stack_s& s) {
       top_s=s.top_s;
        size=s.size;
        arr=s.arr;
   }

  void push_ele(int e) {
       if (top_s < size - 1) {
           top_s++;
           arr[top_s] = e;
       } else {
           cout<<"The Stack is Full"<<endl;
       }
   }

   int pop_ele() {
       if (top_s != -1) {
           int e = arr[top_s];
           top_s--;
           return e;
       } else {
           cout<<"Empty stack"<<endl;
           return -1;
       }
   }


    ~stack_s() {
       delete[] arr;
       cout<<"The object destroyed"<<endl;
   }
};
void myfun(stack_s s)
    {
      int x;
      s.pop_ele();
      cout<<"The Element Is Popped:"<<endl;
      s.pop_ele();
      cout<<"The Element Is Popped:"<<endl;
      s.push_ele(x);
      s.push_ele(x);
    }


int main() {
    stack_s s1;
   s1.push_ele(10);
   s1.push_ele(20);
   s1.push_ele(30);
   s1.push_ele(40);

   cout <<"\nstack s1:"<<endl;
   s1.print_fun();
   stack_s s2(s1);
   cout <<"\nstack s2:"<<endl;
   s2.print_fun();

   cout<<"\n*********************"<<endl;

   s1.pop_ele(); // pop 40
   s1.push_ele(60); // push 60
   cout <<"\nstack s1 After pop:"<<endl;
   s1.print_fun();

  cout <<"\nstack s2 After modify s1:"<<endl;
   s2.print_fun();

 cout<<"***************************"<<endl;


   return 0;
}
