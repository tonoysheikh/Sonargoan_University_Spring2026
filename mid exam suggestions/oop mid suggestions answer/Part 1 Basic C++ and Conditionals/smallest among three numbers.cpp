#include<iostream>
using namespace std;
int main()
{
    int a, b , c;
    cout << "Enter three Numbers :";
    cin >> a >> b >> c;

    if(a < b && a < c )
    {
        cout << a << " is smallest number" << endl;
    }
    else if(b < a && b < c )
    {
        cout << b << " is smallest number" << endl;
    }
    else
    {
        cout << c << " is smallest number" << endl;
    }

    return 0;
}
