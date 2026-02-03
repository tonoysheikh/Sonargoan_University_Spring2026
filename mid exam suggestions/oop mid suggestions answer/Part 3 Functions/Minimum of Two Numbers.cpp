#include <iostream>
using namespace std;

int minOfTwo(int a, int b) {
    if(a < b) return a;
    else return b;
}

int main() {
    int x, y;
    cin >> x >> y;

    cout << minOfTwo(x, y);
    return 0;
}
