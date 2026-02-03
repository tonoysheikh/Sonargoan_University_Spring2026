#include <iostream>
using namespace std;

float area(float r) {
    return 3.1416 * r * r;
}

int main() {
    float radius;
    cin >> radius;

    cout << area(radius);
    return 0;
}
