#include <iostream>

using namespace std;

class Person {
    public: 
        string name; // object set-up
        int age;
};

int main() {
    Person a; // object creation

    a.name = "Emilian";
    a.age = 29;

    cout << "Name: " << a.name << endl;
    cout << "Age: " << a.age << endl;
}