#include <iostream>
#include <string>
using namespace std;
class date {
private:
    int day;
    int month;
    int year;
public:
    void set_date(int _d,int _m,int _y) {
        day=_d;
        month=_m;
        year=_y;
    }

    void display(){
        cout<<day<<"/"<<month<<"/"<<year;
    }
};

enum EType { laborer, secretary, manager};

class Employee{
private:
    int emp_number;
    double salary;
    date hire_date;
    EType emp_type;

public:
    Employee(){
     emp_number=0;
     salary=0;
    emp_type=laborer;
}

    Employee(int _num, double _sal, int _d, int _m, int _y, EType _type) {
        emp_number = _num;
        salary = _sal;
        emp_type = _type;
        hire_date.set_date(_d, _m, _y);
    }
    void emp_info(){
        int etype_ch;
        cout<<"Enter employee number ";
        cin>>emp_number;
        cout<<"Enter salary ";
        cin>>salary;
        int d,m,y;
        cout<<"Enter hire date DD MM YYYY ";
        cin>>d>>m>>y;
        hire_date.set_date(d,m,y);
        cout<<"Enter employee type 0-->Laborer,1-->Secretary,2-->Manager,3-->Director ";
        cin >> etype_ch;

        switch (etype_ch) {
            case 0: emp_type = laborer;
             break;
            case 1: emp_type = secretary;
             break;
            case 2: emp_type = manager;
             break;
            default:
             break;
        }}
    void display_emp(){
        string emp_str;
        switch (emp_type) {
            case laborer:
                 emp_str="Laborer";
                 break;
            case secretary:
                 emp_str ="Secretary";
                  break;
            case manager:
                 emp_str="Manager";
                  break;

            default:
                break;
        }
        cout << "Employee Number "<<emp_number<<endl;
        cout << "Salary= " <<salary<<endl;
        cout << "Hire Date is ";
        hire_date.display();
        cout <<"Employee Type is "<<emp_str<<endl;
    }
};

int main()
{

Employee emp1, emp2, emp3;
    cout << "Enter details for employee 1 " << endl;
    emp1.emp_info();
    cout << "\nEnter details for employee 2:" << endl;
    emp2.emp_info();
    cout << "\nEnter details for employee 3:" << endl;
    emp3.emp_info();
    cout << "\nEmployee 1 " << endl;
    emp1.display_emp();
    cout << "\nEmployee 2 " << endl;
    emp2.display_emp();
    cout << "\nEmployee 3 " << endl;
    emp3.display_emp();

    return 0;
    }




