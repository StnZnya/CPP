#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;

int main() {
    int num1, num2;
    float result1, result2;
    float epsilon = 0.000001;

    cout << "Enter the first integer number: ";
    cin >> num1;
    cout << "Enter the second integer number: ";
    cin >> num2;

    result1 = 1.0f / static_cast<float>(num1);
    result2 = 1.0f / static_cast<float>(num2);

    cout << fixed << setprecision(6);

    if (abs(result1 - result2) < epsilon) {
        cout << "Results are equal (by " << epsilon << " epsilon)" << endl;
    } else {
        cout << "Results are not equal (by " << epsilon << " epsilon)" << endl;
    }

    return 0;
}