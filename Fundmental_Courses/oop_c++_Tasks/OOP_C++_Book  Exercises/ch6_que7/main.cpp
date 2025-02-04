#include <iostream>
using namespace std;

class Angle {
private:
    int degrees;
    float minutes;
    char direction;
public:

    Angle(int d = 0, float m = 0.0, char dir = 'N'){
        degrees=d;
        minutes=m;
        direction=dir;
        }

    void get_angle() {
        cout<<"Enter angle degrees, minutes, direction ";
        cin>>degrees>>minutes>>direction;
    }

    void display(){
        cout <<degrees<<"\xF8"<<minutes<<"’ "<<direction<< endl;
    }
};

int main() {
    Angle ang(149, 34.8, 'W');

    cout << "The angle is ";
    ang.display();
    Angle user_angle;
    user_angle.get_angle();
    cout << "The entered angle is  ";
    user_angle.display();


    return 0;
}
