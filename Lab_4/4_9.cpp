#include <iostream>
using namespace std;

int main() {
    int first, second, third, fourth;

    cout << "Enter the first number (1-255): ";
    cin >> first;

    cout << "Enter the second number (1-255): ";
    cin >> second;

    cout << "Enter the third number (1-255): ";
    cin >> third;

    cout << "Enter the fourth number (1-255): ";
    cin >> fourth;

    if (first >= 1 && first <= 255 &&
        second >= 1 && second <= 255 &&
        third >= 1 && third <= 255 &&
        fourth >= 1 && fourth <= 255) {
        cout << first << "." << second << "." << third << "." << fourth << endl;
    } else {
        cout << "Invalid input. Each number should be in the range 1-255." << endl;
    }

    return 0;
}