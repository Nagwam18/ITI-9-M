#include <iostream>

using namespace std;

class Time{

private:
    int hours;
    int minutes;
    int seconds;
public:
    Time(){
    hours=0;
    minutes=0;
    seconds=0;
    }

     Time(int _h,int _m,int _s){
     hours=_h;
     minutes=_m;
     seconds=_s;
     }
    Time(Time& ct) {
        hours=ct.hours;
        minutes=ct.minutes;
        seconds=ct.seconds;
    }

      void display(){
        cout<< hours << ":"<<minutes << ":"<<seconds <<endl;
    }

      void add(Time&t1,Time&t2) {
        seconds=t1.seconds+t2.seconds;
        minutes = t1.minutes + t2.minutes;
        if(minutes> 59 )
                { minutes-= 60;
                  hours++;
                }
        if(seconds>59)
             { seconds -= 60;
               minutes++;
               }
        hours=t1.hours+t2.hours;
    }

};


int main()
{  Time t1(9, 5, 3);
   Time t2=t1;
   Time t3;

  cout<<"Time1= ";
  t1.display();
  cout<<"Time2= ";
   t2.display();
   t3.add(t1, t2);
   cout<<"Adding time= ";
    t3.display();


    return 0;
}
