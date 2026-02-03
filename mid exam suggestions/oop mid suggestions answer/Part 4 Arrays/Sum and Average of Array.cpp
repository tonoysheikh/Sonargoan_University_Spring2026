#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100];
    int sum = 0;

    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }

    cout << "Sum = " << sum << endl;
    cout << "Average = " << (float)sum / n;
    return 0;
}
