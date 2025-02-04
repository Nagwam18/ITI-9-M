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


class Ship :public Angle {
private:
    int ship_number;
    Angle latitude;
    Angle longitude;
    static int ship_count;
public:
    Ship() {
        ship_number = ++ship_count;
        }
    void get_position() {
        cout<<"Enter position for ship "<<ship_number<<endl;
        cout << "Enter latitude ";
        latitude.get_angle();
        cout << "Enter longitude ";
        longitude.get_angle();
    }
    void count_position(){
        cout<<"Ship Number "<<ship_number <<endl;
        cout<<"Latitude: ";
        latitude.display();
        cout << "Longitude: ";
        longitude.display();
    }
};

int Ship::ship_count = 0;

int main() {
    Ship ship1, ship2, ship3;
    ship1.get_position();
    ship2.get_position();
    ship3.get_position();


    cout<<"\nShip 1->"<<endl;
    ship1.count_position();

    cout<<"\nShip 2->"<<endl;
    ship2.count_position();
    cout<<"\nShip 3->"<<endl;
    ship3.count_position();

    return 0;
}
