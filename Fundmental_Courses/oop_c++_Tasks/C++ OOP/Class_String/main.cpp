#include <iostream>
#include <cstring>
using namespace std;

class string_ {
    char* s;
    int size;

public:

    string_() {
        size = 10;
        s = new char[size];
        s[0] = '\0';
    }


    string_(int _size) {
        size = _size;
        s = new char[size];
        s[0] = '\0';
    }


    string_(const char* str) {
        size = strlen(str) + 10;
        s = new char[size];
        strcpy(s, str);
    }




    void set(const char* str) {
        size = strlen(str) + 1;
        s = new char[size];
        strcpy(s, str);
    }

    const char* get() const {
        return s;
    }


    ~string_() {
        delete[] s;
    }


    string_& operator=(const string_& st) {
        if (this != &st) {
            delete[] s;
            size = st.size;
            s = new char[size];
            strcpy(s, st.s);
        }
        return *this;
    }


    string_ operator+(const string_& st) const {
        int newSize = strlen(s) + strlen(st.s) ;
        string_ result(newSize);
        strcpy(result.s, s);
        strcat(result.s, st.s);
        return result;
    }
};

int main() {

    string_ s1;
    cout << "\ns1"<< s1.get() << endl;


    string_ s2(30);
    s2.set("\nnaaaaan");
    cout << "s2: " << s2.get() << endl;


    string_ s3("ahmed");
    cout << "\ns3: " << s3.get() << endl;

    string_ s4 = s3;
    cout << "\n s4: " << s4.get() << endl;

    s1 = s2;
    cout << "\n s1: " << s1.get() << endl;

    string_ s5 = s2 + s3;
    cout << "\n s2 + s3" << s5.get() << endl;

    return 0;
}
