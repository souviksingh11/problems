#include <iostream>
#include <cmath>  
using namespace std;

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

bool isArmstrongNumber(int num) {
    int n = num;
    int numDigits = countDigits(num);
    int sum = 0;
    
    while (n > 0) {
        int digit = n % 10;      
        sum += pow(digit, numDigits);
        n /= 10;                
    }
    
    return sum == num;           
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isArmstrongNumber(num))
        cout << num << " is an Armstrong Number!" << endl;
    else
        cout << num << " is NOT an Armstrong Number." << endl;
    
    return 0;
}
