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

bool isMagicNumber(int num) {
    while (num >= 10) {
        num = sumOfDigits(num); 
    }
    return num == 1;  
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isMagicNumber(num))
        cout << num << " is a Magic Number!" << endl;
    else
        cout << num << " is NOT a Magic Number." << endl;
    
    return 0;
}
