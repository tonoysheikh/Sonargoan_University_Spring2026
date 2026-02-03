#include <iostream>
using namespace std;

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
float divide(int a, int b) { return (float)a / b; }

int main() {
    int a, b, choice;
    cin >> a >> b >> choice;

    if(choice == 1) cout << add(a, b);
    else if(choice == 2) cout << subtract(a, b);
    else if(choice == 3) cout << multiply(a, b);
    else if(choice == 4) cout << divide(a, b);

    return 0;
}
