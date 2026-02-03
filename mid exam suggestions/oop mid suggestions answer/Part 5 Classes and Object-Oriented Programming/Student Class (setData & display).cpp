#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;

public:
    void setData(int i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << id << " " << name;
    }
};

int main() {
    Student s;
    s.setData(102, "Karim");
    s.display();
    return 0;
}
