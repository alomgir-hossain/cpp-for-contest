// todo: Read a single word (a name) and greet that person. Print two lines: a greeting that contains the name, and a welcome message.

#include <iostream>
using namespace std;

int main() {
    string name;
    cin >> name;

    cout << "Hello, " << name << "!" << endl;
    cout << "Welcome to C++" << endl;
    
    return 0;
}