#include <iostream> 
#include <cmath>
#include <cstdlib>

using namespace std;

// one main that decales some variables
int main() {
    // it is an error to use a variable without first declaring it
    // we can have an umpredictable value
    int a;
    cout << "a = " << a << endl; // unpredictable value

    // assigning an int value to a variable
    int x = 999;
    cout << "x = " << x << endl;

    // we can reassign the value of x
    x = 666;
    cout << "x = " << x << endl;

    // now we will decalre a variable of the type double
    double y = 600.699;
    cout << "y = " << y << endl;
    
    // reassign
    y = 300.9966;
    cout << "y = " << y << endl;

    // also a special character if it is inserted between quotes can be printed
    cout << "} = " << '}' << endl;
    
    // we can decalare variables of char 
    char character = 'G';
    cout << "character = " << character << endl;
}


































