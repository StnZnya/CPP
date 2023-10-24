#include <iostream>
#include <string>
#include <cmath> 
using namespace std;

  int main(){
        
    int x;
    int y;
    int z;
    cout << "Enter x Value";   
    cin >> x;    
        
    cout << "Enter z Value";    
    cin >> z;    
        
     if (x > 1){
    y = (5 * pow (z,2) - 4 )/12;
     }
     else {
    y = (6 * pow (z,2) - 5 )/3;
     };
        
        
    cout << y ;
    }