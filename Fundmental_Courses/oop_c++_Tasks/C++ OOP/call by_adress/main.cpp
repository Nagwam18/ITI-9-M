#include <iostream>

using namespace std;

class stack_s{
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

 void push_ele(int e)
 {
     if(top_s<size-1)
        {
         top_s++;
         arr[top_s]=e;
        }
      else
        {
         cout<<"The Stack is Full"<<endl;
        }
 }

  int pop_ele()
   {
     if(top_s!=-1)
     {
        int e=arr[top_s];
         top_s--;
         return e;
     }
     else
     { cout<<"Empty stack"<<endl;
       return -1;
     }
 }
   /*the copy constr*/
   stack_s(stack_s& s){
        top_s=s.top_s;
        size=s.size;
        arr=new int[size];
        for(int i=0;i<=top_s;i++)
            {
            arr[i]=s.arr[i];
            }
    }

    void print_fun(){
       for (int i = 0; i <= top_s; i++)
            {
           cout << arr[i] <<endl;
            }
   }
    ~stack_s()
    {
      delete[] arr;
      cout<<"the object destroyed"<<endl;
    }

};
// call by address
 void myfun(stack_s* s)
    {
      int x;
      s->pop_ele();
      cout<<"The Element Is Popped:"<<endl;
      s->pop_ele();
      cout<<"The Element Is Popped:"<<endl;
      s->push_ele(x);
      s>push_ele(x);
    }


int main()
{   stack_s s1;
    s1.push_ele(10);
    s1.push_ele(20);
    s1.push_ele(30);
    s1.push_ele(40);
    s1.push_ele(50);

    cout << "stack s1:" << endl;
    s1.print_fun();

      myfun(&s1);

    cout << "after MyFun"<< endl;
    s1.print_fun();



    return 0;
}
