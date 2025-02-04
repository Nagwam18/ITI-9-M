#include <iostream>

using namespace std;
class Object {
private:
    int serial_number;
    static int counter;
public:
    Object() {
        serial_number = ++counter;
    }

    void count_serial(){
        cout<<"I am object number is "<<serial_number<< endl;
    }
};

int Object::counter= 0;

int main() {
    Object obj1, obj2, obj3;


    obj1.count_serial();
    obj2.count_serial();
    obj3.count_serial();

    return 0;
}
