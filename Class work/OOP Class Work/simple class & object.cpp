#include <iostream>
using namespace std;

class Student {
public:
    int age;

    void display() {
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s;   // object created

    s.age = 20;
    s.display();

    return 0;
}
