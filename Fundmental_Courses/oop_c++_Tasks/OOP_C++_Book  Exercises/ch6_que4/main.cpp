#include <iostream>

using namespace std;
class employee{
  private:
    int emp_number;
    float compensation;
  public:
    void emp_data() {
        cout<<"Enter employee number\n";
        cin>>emp_number;
        cout<<"Enter compensation\n";
        cin>>compensation;
    }

    void display(){
        cout<<"Employee Number is "<<emp_number<<endl;
        cout << "Compensation="<<compensation<<endl;
    }

};


int main()
{
    employee *emp= new employee[3];

    for (int i=0;i<3;i++) {
        cout<<"\nEnter Employee data "<<endl;
        emp[i].emp_data();
    }

    cout<<"\nEmployee Data\n";
    for (int i=0;i<3;i++) {
        cout<<"\nEmployee "<<endl;
        emp[i].display();
    }

    delete[] emp;
    return 0;
}

