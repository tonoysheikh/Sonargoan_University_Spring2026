#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100], even = 0, odd = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] % 2 == 0) even++;
        else odd++;
    }

    cout << "Even = " << even << endl;
    cout << "Odd = " << odd;
    return 0;
}
