#include <iostream>
using namespace std;
int main(){
    int n = 45;
    // conditional statement to check if n is positive or negative
    if (n >= 0){
        cout << n << " is a positive number." << endl;
    } 
    else if(n == 0){
       cout << n << " is zero." << endl; }
    else {
        cout << n << " is a negative number." << endl;
    } 
    return 0;
}