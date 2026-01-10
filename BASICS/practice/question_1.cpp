// check if char is lowercase or uppercase
#include <iostream>
using namespace std;
int main() {
    char ch = 'g';
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') {
        cout << ch << " is a lowercase letter." << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << ch << " is an uppercase letter." << endl;
    } else {
        cout << ch << " is not an alphabetic character." << endl;
    }
}