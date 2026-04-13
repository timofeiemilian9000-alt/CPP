#include <iostream>

using namespace std;

int main() {
    int y;

    cout << "Insert a number: ";
    cin >> y;

    do {
        y++; // going up [ increase ]
        cout << "Value of y:" << y << endl;
    } while ( y < 5 );

    return 0;
} 