/*When multiple functions have the same name but different parameters, it is called function overloading.*/
#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }
};

int main() {
    Calculator c;

    cout << "Sum of 2 numbers: " << c.add(5, 3) << endl;
    cout << "Sum of 3 numbers: " << c.add(5, 3, 2) << endl;

    return 0;
}
