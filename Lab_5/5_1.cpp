#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x, y;

    for (int i = 0; i < 5; i++) {
        cout << "Enter number for x: ";
        cin >> x;

        double sin_x = sin(x);
        y = pow(sin_x, 5) + abs(5 * x - 1.5);

        cout << "Function y, for x = " << x << " Equals " << y << endl;
    }

    return 0;
}