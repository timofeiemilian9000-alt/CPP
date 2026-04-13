#include <iostream>

using namespace std;

int main() {
    for ( int i = 1; i <= 20; i++ ) {
        cout << i;
    }

    // real exemple
    int x;

    cout << "Insert a number: ";
    cin >> x;

    while ( x > 0 ) {
        x--; // going down [ decrease ]
        cout << "Value of x: " << x << endl; 
    }

    return 0;
}