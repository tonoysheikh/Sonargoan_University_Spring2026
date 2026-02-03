#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    if(n%3==0 && n%5==0)
        cout << "Divisible by 3 and 5";
    else
        cout << "Not Divisible";
    return 0;
}
