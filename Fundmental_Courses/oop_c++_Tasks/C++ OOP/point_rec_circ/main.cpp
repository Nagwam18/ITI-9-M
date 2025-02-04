#include <iostream>

using namespace std;

    class Point{
    int x;
    int y;
    public:

    Point () {
    x=0;
    y=0;
    }

    Point (int _x, int _y)
    {
      x=_x;
      y=_y;
      cout<<"\n point const"<<endl;

    }

    void set_x(int _x)
           {x=_x;}
    int get_x()
           {return x;}

    void set_y(int _y)
           {y=_y;}
    int get_y()
         {return y;}

    void print_fun()
    {
     cout<<"\n ("<<x<<","<<y<<")"<<endl;
    }

    };
class rectangle{
  Point ul;
  Point lr;
  public:
  rectangle()
  {
      cout<<"\n rectangle const"<<endl;
  }

  rectangle(int x1,int y1,int x2,int y2):ul(x1,y1),lr(x2,y2){};

  Point set_ul(Point _ul)
       {
           ul=_ul;}
  Point get_ul()
       {return ul;}

  Point set_lr( Point _lr)
       {lr=_lr;}
  Point get_lr()
       {return lr;}

void print(){
        cout << "Upper Left is "<<endl;
        ul.print_fun();
        cout << "Lower Right is "<<endl;
        lr.print_fun();

    }
};
class circle{

    Point cen;
    int r;
 public:
       circle() {
           r=0;
        cout << "\n Circle const"<<endl;
    }
     circle(int x, int y, int _r) : cen(x, y)
               {r=_r;}


    void set_center(Point _center)
       {
        cen = _center;
        }
    Point get_center()
    {
         return cen;
          }

    void set_radius(int _r)
          {
          r= _r;
           }
    int get_radius()
     {
          return r;
           }

    void print(){
        cout << "Circle center is : "<<endl;;
         cen.print_fun();
        cout << "Radius is: " <<r<< endl;
    }
};

int main()
{

    Point p1(3,3);
    p1.print_fun();

    rectangle rect(2,2,4,4);
    rect.print();

    circle circ(5,5,15);
    circ.print();





    return 0;
}
