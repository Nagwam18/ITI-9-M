#include <iostream>
#include <cmath>

using namespace std;
class fraction {
private:
    int num;
    int den;
public:
    void set_num(int _num) {
        num = _num;
    }
    int get_num() {
        return num;
    }
    void set_den(int _den) {
        den = _den;
    }
    int get_den() {
        return den;
    }

    int gcd(int a, int b) {
        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    void simplify() {
        int g = gcd(abs(num), abs(den));
        num /= g;
        den /= g;
        if (den < 0) {
            num = -num;
            den = -den;
        }
    }

public:
    fraction() {
        num = 1;
        den = 1;
    }

    fraction(int _num) {
        num = _num;
        den = 1;
    }

    fraction(int _num, int _den) {
        if (_den == 0) {
            cout << "Denominator cannot be zero!" << endl;
            num = 1;
            den = 1;
        } else {
            num = _num;
            den = _den;
        }
        cout << "Two parameter const" << endl;
    }

    fraction operator+(const fraction& f) {
        int r_num = (num * f.den) + (f.num * den);
        int r_den = den * f.den;
        simplify();
        return fraction(r_num, r_den);
    }
    void print_fun() const {
        if (den == 0) {
            cout << "Invalid value of den" << endl;
        } else {
            cout << "Fraction: " << num << "/" << den << endl;
        }
    }};

int main()
{
    fraction f1(1, 2);
    fraction f2(1, 3);

   cout<<"Fraction 1=" << endl;
   f1.print_fun();
    cout<<"Fraction 2="<< endl;
    f2.print_fun();

    fraction sum = f1 + f2;
    cout<<"f1 + f2= "<< endl;
    sum.print_fun();
    return 0;
}
