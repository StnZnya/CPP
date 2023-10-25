#include <iostream>
#include <string>
#include <cmath> // math

int main()
{
    int a = 2;
    double b = 3.141;
    double result;
    result = cbrt((0.315 * log(a)) / (1 + cbrt((0.711 + log(b)) / (1 + cbrt(log(b/a))))));
   
    std::cout << result ;
}
