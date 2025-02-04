#include <iostream>

using namespace std;

class Int{
    int var;
    public:
        Int(){
            var=0;}

      void display(){
          cout<<"it looks just like an int"<<endl;}

      int add_fun(int var1,int var2){
          int sum=0;
          sum=var1+var2;
          return sum;
      }
};
int main()
{
    int v1,v2,s;
    cin>>v1>>v2;
    Int i;
    i.display();
    s=i.add_fun(v1,v2);
    cout<<"the sum is"<<s;


    return 0;
}
