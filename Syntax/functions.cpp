#include <iostream>

using namespace std;

int sum( int a, int b ) { // the function here can have arguments.
    return a + b;
}

int main() { // here you can use the function above 
    int result = sum(10, 100);
    cout << result; // remember to print the result!
}