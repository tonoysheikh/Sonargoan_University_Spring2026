#include <iostream>
using namespace std;

float calculateGPA(float avg) {
    if(avg >= 80) return 4.00;
    else if(avg >= 75) return 3.75;
    else if(avg >= 70) return 3.50;
    else if(avg >= 65) return 3.25;
    else if(avg >= 60) return 3.00;
    else return 0.00;
}

int main() {
    float average;
    cin >> average;

    cout << calculateGPA(average);
    return 0;
}
