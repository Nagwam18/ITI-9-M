#include <iostream>
#include<string.h>
#include <stdlib.h>
using namespace std;

class Complex_num {
    public:
    float realn;
    float imagn;


    void set_real(float _realn )
    {
         realn=_realn;
    }

    float get_real( )
    {
         return realn;
    }

    void set_imagn(float _imagn )
    {
         imagn=_imagn;
    }

    float get_imagn()
    {
         return imagn;
    }

};

 void complex_fun(Complex_num cm )
    {
       if(cm.get_imagn()==0){
            cout<<"The complex number is"<<cm.get_real()<<endl;
       }

       else if(cm.get_real()<0){
           cout<<"The complex number is "<<cm.get_real()<<" - "<<abs(cm.get_imagn())<<"i"<<endl;
       }
       else{
           cout<<"The complex number is "<<cm.get_real()<<" + "<<cm.get_imagn()<<"i"<<endl;
       }
       }

int main()
{

     Complex_num  cm;
     int r,i;
     cout<<"Enter Real part"<<endl;
     cin>>r;
     cm.set_real(r);

     cout<<"Enter Imagen part"<<endl;
     cin>>i;
     cm.set_imagn(i);

     complex_fun(cm);

    return 0;
}


