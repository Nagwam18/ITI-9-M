#include <iostream>

using namespace std;
class date {
private:
    int month;
    int day;
    int year;
public:

    void date_info() {
        cout<<"Enter the date as MM DD YY) ";
        cin>>month>>day>>year;
    }
    void display() {
        cout<<"The date is ";
        cout<<month<<"/"<<day<<"/"<<year<<endl;
    }
};

int main() {
    date d;
    d.date_info();
    d.display();
    return 0;
}

