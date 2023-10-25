#include <iostream>
using namespace std;

int main() {
    int constellationCode;
    cout << "Enter the constellation code (1, 2, 3): ";
    cin >> constellationCode;
    string constellationName;
    int starCount;

    switch (constellationCode) {
        case 1:
            constellationName = "Orion";
            starCount = 7;
            break;
        case 2:
            constellationName = "Ursa Major";
            starCount = 7;
            break;
        case 3:
            constellationName = "Cassiopeia";
            starCount = 5;
            break;
              }

    cout << "Constellation: " << constellationName << endl;
    cout << "Number of stars: " << starCount << endl;

    return 0;
}