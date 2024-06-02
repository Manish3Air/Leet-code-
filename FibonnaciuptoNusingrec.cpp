#include <iostream>
using namespace std;


void printFibonacci(int n, int a = 0, int b = 1) {
    //if(a > n) return;  and inplace of   n-1  , n will be there.
    if (n == 0) return; 
    cout << a << " ";
    printFibonacci(n-1, b, a + b); 
}

int main() {
    printFibonacci(15);
    cout << endl;
    return 0;
}
