// #include <iostream>
// #include <string>
// #include <cmath> 
// using namespace std;

//   int main(){
        
//     int n , k;
//     int l;
//     cout << "Enter N Value which is positive 3-digit number: ";   
//     cin >> n;    
        
//     if (n < 100 || n > 999){ 

//    cout << "This number is not a positive 3-digit number";

//         }
//       else{
//         while (n != 0)
//         {
//           k % 10;    
//           // if (k %= 2){cout << k;}
//           cout << k << " ";
//           n = n / 10;
//         }
//     };   
    
//     //     (l / 2)* 2 == k;
//     // cout << l << "";
       
//         return 0;
//   }


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