#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n = 20; 
    double sum = 0.0;

    for (int i = 1; i <= n; i++) {
        double sqrt_i = sqrt(i); 
        sum += sqrt_i;
    }

    double average = sum / n; 

    cout << "Average arithmetic roots of numbers from 1 to " << n << " equals " << average << endl;

    return 0;
}