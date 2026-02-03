#include <iostream>
using namespace std;

int maxOfTwo(int a, int b) {
    if(a > b) return a;
    else return b;
}

int main() {
    int x, y;
    cin >> x >> y;

    cout << maxOfTwo(x, y);
    return 0;
}
