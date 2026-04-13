#include <iostream>

using namespace std;

int main() {
    // aritmethics
    // +  -  *  /  %
    // confrontations
    // ==  !=  >  <  >=  <=
    // logic
    // &&  ||  !
    
    int x;
    cout << "Insert a number! ";
    cin >> x;
    
    if ( x > 0 ) {
        cout << "Positive!";
    } else {
        cout << "No positive!";
    }

    int y;
    cout << "Insert a number for the switch: ( if you will select 1 it will print One )";
    cin >> y;

    switch ( y ) {
        case 1:
            cout << "One";
            break;
        default:
            cout << "Else!";
    }
}