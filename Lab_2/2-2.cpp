#include <iostream>
#include <string>
#include <cmath>
using namespace std;

  int main(){
        
    int x;
    int y;
    int h;
    cout << "Enter x Value";   
    cin >> x;    
    
    cout << "Enter y Value";   
    cin >> y;    
            
    h = (-1 * x + 2);
        
    if (x <= 2 && x >= 0 && y <= h){
          cout << "In triangle";
        }
        else{
    cout << "Isn't in triangle";
    };    
   }