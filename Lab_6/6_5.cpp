#include <iostream>
using namespace std;
int main() {
    int N;
    cout << "Enter natural number N: ";
    cin >> N;
    int sum = 0;
    while (N > 0) {
        int digit = N % 10;  
        if (digit > 5) {
            sum += digit;  
        }
        N /= 10;  
    }
    cout << "Summ of numbers, which greater than 5: " << sum << endl;
    return 0;
}