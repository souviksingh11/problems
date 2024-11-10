#include <iostream>
using namespace std;

int tribonacci(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 1;
    
    int a = 0, b = 1, c = 1, result;
    
    for (int i = 3; i <= n; ++i) {
        result = a + b + c;
        a = b;
        b = c;
        c = result;
    }
    
    return c;
}

int main() {
    int n;
    cout << "Enter the position (n) to get the Tribonacci number: ";
    cin >> n;
    
    cout << "The " << n << "-th Tribonacci number is: " << tribonacci(n) << endl;
    
    return 0;
}
