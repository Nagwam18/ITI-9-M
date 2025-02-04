#include <iostream>
using namespace std;

class stack {
    int arr[];
    int size=5;
    int top_s;

public:
    stack()  {
         int arr[size];
         top_s=-1;
         //int arr[];
        cout<<" First Constructor"<<endl;
    }

    void push_ele(int e) {
        if (top_s < size - 1) {
            top_s++;
            arr[top_s] = e;
        } else {
            cout<<"The Stack is Full"<<endl;
        }
    }
    int pop_ele() {
        if (top_s != -1) {
            int e = arr[top_s];
            top_s--;
            return e;
        } else {
            cout << "stack Is Empty" << endl;
            return -1;
        }
    }

    void print_fun(){
        cout << "Stack elements: ";
        for (int i = 0; i <= top_s; i++) {
            cout << arr[i] << " ";
        }
    }
    ~stack()
    {
    cout<<"The object destroyed"<<endl;
    }
};

void myfun(stack s) {
    int x;
    s.pop_ele();
    cout << "The Element Is Popped:" << endl;
    s.pop_ele();
    cout << "The Element Is Popped:" << endl;
    s.push_ele(x);
    s.push_ele(x);
}

int main() {
    stack s1;
    s1.push_ele(10);
    s1.push_ele(20);
    s1.push_ele(30);
    s1.push_ele(40);
    s1.push_ele(50);

    cout<<"*******************"<<endl;
    s1.print_fun();

    s1.pop_ele();
    s1.push_ele(60);
    s1.print_fun();
    cout<<"*******************"<<endl;

    s1.push_ele(70);
    s1.push_ele(80);
    s1.push_ele(90);
    cout<<"*******************"<<endl;

    s1.print_fun();

    return 0;
}
