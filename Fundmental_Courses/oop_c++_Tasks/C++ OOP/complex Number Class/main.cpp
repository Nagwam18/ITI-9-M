#include <iostream>
#include <string.h>

using namespace std;

class Complex_num {
public:
    double realn;
    double imagn;

public:
    void set_real(double _realn) {
        realn = _realn;
    }

    float get_real() {
        return realn;
    }

    void set_imagn(double _imagn) {
        imagn = _imagn;
    }

    float get_imagn() {
        return imagn;
    }


    void complex_fun(double realn, double imagn) {
        if (imagn == 0) {
            cout << "The complex number is " <<realn<< endl;
        } else if (imagn < 0) {
            cout << "The complex number is " <<realn<< imagn << "i" << endl;
        } else {
            cout << "The complex number is " <<realn<< "+" << imagn <<"i"<< endl;
        }
    }

    Complex_num Complex_add(Complex_num c) {
        Complex_num result;
        result.realn = c.realn+realn;
        result.imagn = c.imagn+imagn;
        return result;
    }

    void fun_print() {
        if (imagn == 0) {
            cout << "The complex number is " <<realn<< endl;
        } else if (imagn < 0) {
            cout << "The complex number is " <<realn<< imagn << "i" << endl;
        } else {
            cout << "The complex number is " <<realn<< "+" << imagn <<"i"<< endl;
        }
    }

    Complex_num() {
        realn = 0;
        imagn = 0;
        cout << "First object created" << endl;
    }

    Complex_num(double _realn) {
        cout << "Second object created" << endl;
        realn = _realn;
        imagn = 1.0;
    }

    Complex_num(int _imagn) {
        cout << "Third object created" << endl;
        imagn = _imagn;
        realn = 1;
    }
};

//alone
Complex_num Complex_add(Complex_num c5, Complex_num c6) {
    Complex_num result;
    result.set_real(c5.get_real() + c6.get_real());
    result.set_imagn(c5.get_imagn() + c6.get_imagn());
    return result;
}




int main() {
   /* Complex_num v, z;
    cout<<"************************"<<endl;
    Complex_num c1;
    cout<<"************************"<<endl;
    Complex_num c2(3.0);
    cout<<"************************"<<endl;
    Complex_num c3(5);
    cout<<"************************"<<endl;
    c2.fun_print();
    cout<<"************************"<<endl;
    v=c2.Complex_add(c3);
    z=Complex_add(c2, c3);
    cout<<"************************"<<endl;
    v.fun_print();
    z.fun_print();*/



    return 0;
}
