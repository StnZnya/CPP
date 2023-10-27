#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double f(double x) {
    return pow(x, 5) - sqrt(9 - pow(x, 2));
}
int main() {
    double a, b, h;
    cout << "Enter the start of the segment a: ";
    cin >> a;
    cout << "Enter the end of the segment b: ";
    cin >> b;
    cout << "Enter a step h: ";
    cin >> h;

    cout << "------------------------\n";
    cout << setw(5) << " : X    :" << setw(8) << "Y :\n";
    cout << "------------------------\n";

    for (double x = a; x <= b; x += h) {
        if (x >= -3 && x <= 3) {
            double y = f(x);
            cout << fixed << setprecision(2) << setw(5) << ": " << x << " :" << setw(8) << y << " :\n";
        } else {
            cout << "Value x = " << x << " does not belong to region of permissible values .\n";
            break; 
        }
    }
    cout << "------------------------\n";
    return 0;
}