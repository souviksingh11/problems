#include <iostream>
#include <cmath> 
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;  
        num /= 10;     
    }
    return sum;
}

bool isDudeneyNumber(int num) {
    int cubeRoot = cbrt(num);
    int sum = sumOfDigits(num);  
    
    return sum == cubeRoot;            
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isDudeneyNumber(num))
        cout << num << " is a Dudeney Number!" << endl;
    else
        cout << num << " is NOT a Dudeney Number." << endl;
    
    return 0;
}
