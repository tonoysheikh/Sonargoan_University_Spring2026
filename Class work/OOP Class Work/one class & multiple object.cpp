#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    // Creating multiple objects
    Student s1, s2, s3;

    // Assigning values
    s1.name = "Alice"; s1.age = 20;
    s2.name = "Bob";   s2.age = 22;
    s3.name = "Charlie"; s3.age = 19;

    // Displaying
    s1.display();
    s2.display();
    s3.display();

    return 0;
}
