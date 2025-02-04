#include <iostream>
#include <string.h>

using namespace std;

class Complex_num {
    double realn;
    double imagn;
    static int counter;

public:


    static int get_counter(){
        return counter;

    }
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

    Complex_num() {
        realn = 0.0;
        imagn = 0.0;
        counter++;
        cout << "\nFirst const" << endl;
    }

    Complex_num(double _realn) {
        cout << "\nSecond const" << endl;
        realn = _realn;
        imagn = 1.0;
    }

    Complex_num(double _realn, double _imagn) {
        cout << "\nThird const" << endl;
        realn = _realn;
        imagn = _imagn;
        counter++;
    }

    void complex_fun(double realn, double imagn) {
        if (imagn == 0) {
            cout << "The complex number is " << realn << endl;
        } else if (imagn < 0) {
            cout << "The complex number is " << realn << imagn << "i" << endl;
        } else {
            cout << "The complex number is " << realn << "+" << imagn << "i" << endl;
        }
    }

    Complex_num Complex_add(Complex_num c) {
        Complex_num result;
        result.realn = c.realn + realn;
        result.imagn = c.imagn + imagn;
        return result;
    }

    void fun_print() {
        cout<<"\n The Number Of Object is="<<counter<<endl;//print number of obj
        if (imagn == 0) {
            cout << "The complex number is " << realn << endl;
        } else if (imagn < 0) {
            cout << "The complex number is " << realn << imagn << "i" << endl;
        } else {
            cout << "The complex number is " << realn << "+" << imagn << "i" << endl;
        }
    }

    // Complex + int
    Complex_num operator+ (int x) {
        Complex_num result;
        result.realn = realn + x;
        result.imagn = imagn;
        return result;
    }

    // Equality
    int operator== (Complex_num c) {
        return realn == c.get_real() && imagn == c.get_imagn();
    }

    // Not equal
    int operator!= (Complex_num c) {
        return !(*this == c);
    }

    // Prefix
    Complex_num operator++ () {
        realn = realn + 1;
        return *this;
    }

    // Postfix
    Complex_num operator++ (int) {
        Complex_num temp = *this;
        realn += 1;
        return temp;
    }
~Complex_num(){

   cout<<"\n objected Destroyed"<<endl;
   counter--;
}
    friend Complex_num operator+ (int x, Complex_num c);
    friend Complex_num operator+ (Complex_num d, Complex_num e);
};

// Complex + Complex
Complex_num operator+ (Complex_num d, Complex_num e) {
    Complex_num result;
    result.realn = d.realn + e.realn;
    result.imagn = d.imagn + e.imagn;
    return result;
}

// int + Complex
Complex_num operator+ (int x, Complex_num c) {
    Complex_num result;
    result.realn = c.get_real() + x;
    result.imagn = c.get_imagn();
    return result;
}
int Complex_num::counter=0;

int main() {

    int x;
    Complex_num *ptr[3]={
        new Complex_num(3,4),
        new Complex_num(5,6),
        new Complex_num(7,8)
    };
    for(int i=0;i<3;i++)
        ptr[i]->fun_print();
    for(int i=0;i<3;i++)
        delete ptr[i];

    Complex_num c1(1, 3);
    Complex_num c2(4, 5);
    Complex_num c3;

    // Complex + Complex
    c3 = c1 + c2;
    c3.fun_print();

    // Complex + int
    c3 = c1 + 5;
    c3.fun_print();

    // int + Complex
    c3 = 7 + c2;
    c3.fun_print();

    // Equality==
    if (c1 == c2) {
        cout << "\n c1,c2 equal" << endl;
    } else {
        cout << "\n c1,c2 not equal" << endl;
    }

    // Inequality!=
    if (c1 != c2) {
        cout << "\n c1,c2 not equal" << endl;
    } else {
        cout << "\n c1, c2 are equal." << endl;
    }

    // Prefix
    ++c1;
    cout << "C1 After prefix="<<endl;
    c1.fun_print();

    // Postfix
    c2++;
    cout << "C2 After postfix="<<endl;
    c2.fun_print();

    return 0;
}
