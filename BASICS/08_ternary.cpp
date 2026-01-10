#include <iostream>
using namespace std;
int main() {
    // ternary operator
    // syntax: condition ? expression_if_true : expression_if_false
    int n = 10;
    string result = (n % 2 == 0) ? "even" : "odd";
    cout << n << " is an " << result << " number." << endl;
}