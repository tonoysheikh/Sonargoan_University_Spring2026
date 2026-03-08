/*Inheritance is a feature of OOP where a class acquires the properties and functions of another class.*/
#include <iostream>
using namespace std;

// Base class
class Animal {
public:
    void sound() {
        cout << "Animal makes a sound" << endl;
    }
};

// Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "Dog barks" << endl;
    }
};

int main() {
    Dog d;

    d.sound(); // inherited from Animal
    d.bark();  // function of Dog

    return 0;
}
