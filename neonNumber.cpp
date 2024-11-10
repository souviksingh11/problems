#include <iostream>
using namespace std;

int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;  
        num /= 10;    
    }
    return sum;
}

bool isNeonNumber(int num) {
    int square = num * num;       
    int sum = sumOfDigits(square);
    return sum == num;            
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isNeonNumber(num))
        cout << num << " is a Neon Number!" << endl;
    else
        cout << num << " is NOT a Neon Number." << endl;
    
    return 0;
}
