// The libraries are extra commands that makes our C++ reacher.
// <cmath> It's a library that allows us to use math functions
// sqareRoot as example: sqrt
#include <cmath>
// library for printing cout
#include <iostream>

// I don't explain this command
using namespace std;

// after the libraries we have our main which faces the core of our program
int main() {
    cout << "PRINT OF THE INTEGER   1  :  " << 2 << endl;
    cout << "PRINT OF THE REAL    100.0:  " << 100.0 << endl;

    // examples of the four basic operations
    cout << "20 + 20 = " << 20 + 20 << endl;
    cout << "20 - 20 = " << 20 - 20 << endl;
    cout << "20 * 20 = " << 20 * 20 << endl;
    cout << "20 / 20 = " << 20 / 20 << endl;
    
    // examples from library
    cout << "10 sqared " << pow(10, 2) << endl;
    cout << "10 to the 10 " << pow(10, 10) << endl;

} 