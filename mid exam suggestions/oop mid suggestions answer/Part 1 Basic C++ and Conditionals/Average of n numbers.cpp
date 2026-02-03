#include <iostream>
using namespace std;

int main() {
    int n;
    float sum=0, x;
    cin >> n;

    for(int i=1;i<=n;i++){
        cin >> x;
        sum += x;
    }
    cout << sum/n;
    return 0;
}
