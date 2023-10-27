#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive 3-digit number: ";
    cin >> n;

    if (n < 100 || n > 999) {
        cout << "This is not a positive 3-digit number." << endl;
    } else {
        int originalNumber = n;
        int OddDigits = 0;

        while (n > 0) {
            int digit = n % 10;
            if (digit % 2 != 0) {
                OddDigits++;
            }
            n /= 10;
        }

        cout << "Original number N: " << originalNumber << endl;
        cout << "Number of odd digits: " << OddDigits << endl;
    }

    return 0;
}