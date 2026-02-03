#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int id;
    char grade;

public:
    void setValue(string n, int i, char g) {
        name = n;
        id = i;
        grade = g;
    }

    void getValue() {
        cout << name << " " << id << " " << grade;
    }
};

int main() {
    Student s;
    s.setValue("Rahim", 101, 'A');
    s.getValue();
    return 0;
}
