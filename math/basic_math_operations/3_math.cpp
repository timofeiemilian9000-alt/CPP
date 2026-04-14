#include <cmath>
#include <iostream>

using namespace std;

int main() {
    // example of an error 1 / 0 ( one divided by 0 )
    // cout << "1 / 0 " << 1 / 0 << endl;
    cout << "square(100) " << sqrt(100) << endl; // output 10 checked!

    // example of a nan value
    cout << "sqrt(-1) " << sqrt(-1) << endl;

    // dividing integers sometimes makes the division 0
    cout << "1 / 10 " << 1 / 10 << endl;

    // the division of reals doesn't have floors (ceils)
    cout << "1. / 10. " << 1. / 10. << endl; // USE THIS

    // we can force the integer to be a real number by doubling it
    // but by printing it we can't see the difference
    cout << "double(10) " << (double)10 << endl; // AVOID

    // But the difference exists if we calculate 1/(double)10
    // we can have the real number 0.1
    // a real number and not 0
    cout << "1 / (doublel)10 " << 1 / (double)10 << endl; 
}