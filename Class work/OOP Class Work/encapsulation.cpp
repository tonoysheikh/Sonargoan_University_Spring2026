/*Encapsulation in C++ means binding data (variables) and methods (functions) together 
in a class and restricting direct access to some of the object's components. 
This is usually done using private, protected, and public access modifiers.*/

#include <iostream>
using namespace std;

class Student {
private:
    int age;          // private data (cannot be accessed directly)

public:
    // Setter function to set age
    void setAge(int a) {
        age = a;
    }

    // Getter function to get age
    int getAge() {
        return age;
    }
};

int main() {
    Student s;

    s.setAge(20);               // setting value using public method
    cout << "Age: " << s.getAge();   // accessing value using getter

    return 0;
}
