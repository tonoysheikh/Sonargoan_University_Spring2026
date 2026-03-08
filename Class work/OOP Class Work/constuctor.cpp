/*A constructor is a special function of a class that initializes objects automatically when they are created.*/
#include <iostream>
using namespace std;

class Student {
public:
    int age;

    // Constructor
    Student() {
        age = 20;
    }

    void show() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s;   // constructor is called automatically
    s.show();

    return 0;
}
