#include <iostream>
#include <limits>
using namespace std;
#include <conio.h>
const char ESC = 27;
class tollBooth{
  uint32_t total_num_cars;
  double  total_money;

   public:
   tollBooth(){
   total_num_cars=0;
   total_money=0;
   }
   void payingCar(){
   total_num_cars++;
   total_money=0.5;
   }
   void nopayCar(){
       total_num_cars+=total_num_cars;
    }
     void display() const {
        cout << "Total cars passed is " << total_num_cars << endl;
        cout << "Total money collected" << total_money<< endl;
    }

     };


int main()
{
     tollBooth t;

    cout << "Press (p) to count a paying car" << endl;
    cout << "Press (n) to count a non-paying car" << endl;
    cout << "Press (Esc) to display totals and exit" << endl;

    char ch;
    while (true) {
        ch =cin.get();
        if (ch == 'p' || ch == 'P') {
            t.payingCar();
        }
        else if (ch == 'n' || ch == 'N') {
            t.nopayCar();
        }
        else if (ch == ESC) {
            t.display();
            break;
        }
    }

    return 0;
}
