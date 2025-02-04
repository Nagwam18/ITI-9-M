#include <iostream>
#include <string>
using namespace std;

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
    float get_price() const {
        return price;
    }
    void info() {
        string t;
        float p;
        cout << "Enter title: ";
        cin.ignore();
        cin>>t;
        cout << "Enter price: ";
        cin>>p;
    }
    void display_info(){
        cout<<"Title "<<get_title()<<endl;
        cout<<"Price "<<get_price()<<endl;
    }
};

class Sales {
protected:
    float sales[3];

public:
    void get_data() {
        cout<<"Enter sales for the last three months\n";
        for(int i=0; i<3;i++){
            cout<<"Month "<<endl;
            cin>>sales[i];
        }
    }
    void display_data(){
        cout<<"Sales for the last three months\n";
        for(int i=0; i<3;i++){
            cout<<"Month "<<sales[i]<<endl;
          }
    }
};

class Book : public Publication, public Sales {
private:
    int page_count;

public:
    void set_page_count(int p) {
        page_count = p;
    }

    int get_page_count() const {
        return page_count;
    }
    void info() {
        Publication::info();
        get_data();
        int p;
        cout<<"Enter page count ";
        cin>>p;
        set_page_count(p);
    }

    void display_info(){
        Publication::display_info();
        cout<<"Page Count "<<get_page_count()<<endl;
        display_data();
    }
};

class Tape : public Publication, public Sales {
private:
    float playing_time;

public:
    void set_playing_time(float pt) {
        playing_time = pt;
    }

    float get_playing_time(){
        return playing_time;
    }

    void info() {
        Publication::info();
        get_data();
        float pt;
        cout<<"Enter playing time";
        cin>>pt;
        set_playing_time(pt);
    }
    void display_info(){
        Publication::display_info();
        cout<<"Playing Time "<<get_playing_time()<<" minutes"<< endl;
        display_data();
    }
};

int main() {
    Book book;
    Tape tape;

    cout << "\nEnter details for the Book\n";
    book.info();
    cout << "\nEnter details for the Tape\n";
    tape.info();
    cout << "\nDetails of the Book\n";
    book.display_info();
    cout << "\nDetails of the Tape:\n";
    tape.display_info();

    return 0;
}
