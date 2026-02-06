#include <iostream>
using namespace std;
int main(){
  
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int num = 1;

    for(int j = 0; j < n; j++){
    for (int i = 0; i < j; i++){
       cout << num;
         num++;
    }
    cout << endl;
    }


}