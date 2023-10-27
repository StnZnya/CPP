#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "Enter five numbers: ";
    float num1, num2, num3, num4, num5;

    cin >> num1 >> num2 >> num3 >> num4 >> num5;

    cout << fixed << setprecision(1) << num1 << endl;
    cout << fixed << setprecision(2) << num2 << endl;
    cout << fixed << num3 << endl;
    cout << fixed << setprecision(2) << num4 << endl;
    cout << fixed << setprecision(0) << num5 << endl;

    return 0;
}