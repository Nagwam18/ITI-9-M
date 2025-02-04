#include <iostream>
#include <string>
using namespace std;

enum pay_Period { hourly, weekly, monthly };

class Employee {
protected:
    string name;
    int emp_id;

public:
    Employee(string n, int id):name(n),emp_id(id) {}

    void display_employee_info() {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << emp_id << endl;
    }
};

class Employee2 : public Employee {
protected:
    double compensation;
    pay_Period period;

public:
    Employee2(string n, int id, double comp, pay_Period p)
        : Employee(n, id),compensation(comp),period(p) {}

    void display_employee2_info() {
        Employee::display_employee_info();
        cout<<"Compensation "<<compensation<<endl;

        string period_Str;
        if (period==hourly) {
            period_Str="Hourly";
        } else if (period==weekly) {
            period_Str="Weekly";
        } else {
            period_Str="Monthly";
        }

        cout<<"Pay Period "<<period_Str<<endl;
    }
};

class Manager : public Employee2 {
public:
    Manager(string n, int id, double comp, pay_Period p)
        : Employee2(n, id, comp, p) {}
};

class Scientist : public Employee2 {
public:
    Scientist(string n, int id, double comp, pay_Period p)
        : Employee2(n, id, comp, p) {}
};

class Laborer : public Employee2 {
public:
    Laborer(string n, int id, double comp, pay_Period p)
        : Employee2(n, id, comp, p) {}
};

int main() {
    Manager mang("John Doe",1,5000.0,monthly);
    Scientist scien("Jane Smith",2,4000.0,weekly);
    Laborer labor("Bob Brown",3,15.0,hourly);
    cout<<"\nManager Info:\n";
    mang.display_employee2_info();
    cout<<"\nScientist Info:\n";
    scien.display_employee2_info();
    cout<<"\nLaborer Info:\n";
    labor.display_employee2_info();

    return 0;
}
