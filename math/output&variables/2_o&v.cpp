#include <iostream>
#include <cmath>
#include <cstdlib>

using namespace std;

int main() {
    // conventional name of 'e'
    char character = 'a';
    cout << "Character = " << character << endl;

    // reassignment 
    character = '\212';
    cout << "Character = " << character << endl;

    // same object ( 1 ) can be seen differently
    cout << "5" << endl; // message
    cout << '5' << endl; // character
    cout << 5 << endl; // integer
    cout << 5. << endl; // real

    // on the print there is no-difference
    // BUT for C++ it differs

    // many assignments
    int hour, minute;
    char colon;
    hour = 11;
    minute = 59;
    colon = ':';
    cout << "The current time is: " << hour << colon << minute << endl;

    // old but gold math staff
    cout << "2*3-1 = " << 2*3-1 << " | 2*(3-1) = " << 2*(3-1) << endl;

    // Floring the result 
    cout << "Thanks to floring: (59*100) / 60 = " << (59*100) / 60 << endl; 
    cout << "Otherwise 59 * (100/60) = " << 59 * (100/60) << endl;

    // character operations
    char letter;
    letter = 'a' + 7; // it prints b the next in the alphabet
    cout << letter << endl;
    
    // Computer alphabet = ASCII
    cout << "Number of the character = " << (int)letter << endl;
}
