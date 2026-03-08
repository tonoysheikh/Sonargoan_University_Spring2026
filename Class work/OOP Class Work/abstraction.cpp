#include<iostream>
using namespace std;

class Calculator{
private:
    int num1, num2;

    void add(int x, int y){
        num1 = x;
        num2 = y;
        cout << "Result: " << num1 + num2 << endl;
    }

public:
    void display(int a, int b){
        add(a, b);
    }
};

int main(){
    Calculator c;
    c.display(10,20);
    return 0;
}
