#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Enter a positive integer value greater than 1: ";
    cin >> n;

    if (n <= 1) {
        cout << "The entered value is not legal. Please enter a positive integer greater than 1." << endl;
    } else {
        const int MAX_N = 60; 

        if (n > MAX_N) {
            cout << "Sorry, the side size is too big for the screen's dimensions." << endl;
        } else {
            cout << '+';
            for (int i = 0; i < n - 2; i++) {
                cout << '-';
            }
            cout << '+' << endl;

            for (int i = 0; i < n - 2; i++) {
                cout << '|';
                for (int j = 0; j < n - 2; j++) {
                    cout << ' ';
                }
                cout << '|' << endl;
            }

            if (n > 1) {
                cout << '+';
                for (int i = 0; i < n - 2; i++) {
                    cout << '-';
                }
                cout << '+' << endl;
            }
        }
    }

    return 0;
}