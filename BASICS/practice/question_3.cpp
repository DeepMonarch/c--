#include <iostream>
using namespace std;
int main() {
    // sum of all odd numbers from 1 to n
    int n = 10;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
