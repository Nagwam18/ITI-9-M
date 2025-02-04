#include <iostream>
#include <string>
using namespace std;

enum disk_type { CD, DVD };

class Publication {
protected:
    string title;
    float price;

public:
    void set_title(string t) {
        title = t;
    }
    string get_title(){
        return title;
    }
    void set_price(float p) {
        price = p;
    }
    float get_price(){
        return price;
    }
    void info() {
        string t;
        float p;
        cout << "Enter title: ";
        cin>>t;
        set_title(t);
        cout << "Enter price: ";
        cin >> p;
        set_price(p);
    }
    void display_info(){
        cout << "Title "<<get_title()<<endl;
        cout << "Price="<<get_price()<<endl;
    }
};

class Disk : public Publication {
private:
    disk_type disk_t;

public:
    void set_disk_type(disk_type dt) {
        disk_t = dt;
    }

    disk_type get_disk_type(){
        return disk_t;
    }


    void info() {
        Publication::info();
        char choice;
        cout<<"Enter disk type (c for CD, d for DVD): ";
        cin>>choice;

        if (choice=='c'||choice=='C') {
            set_disk_type(CD);
        } else if (choice=='d'||choice=='D') {
            set_disk_type(DVD);
        } else {
            cout<<"Invalid input "<< endl;
            set_disk_type(CD);
        }
    }

    void display_info(){
        Publication::display_info();
        if (get_disk_type() == CD) {
        cout << "Disk Type: CD" << endl;
        }
        else {
            cout << "Disk Type: DVD" << endl;
             }
            }
        };

int main() {
    Disk disk;

    cout << "\nEnter info for Disk\n";
    disk.info();

    // Display data for Disk
    cout << "\info of the Disk \n";
    disk.display_info();

    return 0;
}
