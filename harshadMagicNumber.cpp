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

int digitalRoot(int num) {
    while (num >= 10) {
        num = sumOfDigits(num); 
    }
    return num;
}

bool isHarshadNumber(int num) {
    int sum = sumOfDigits(num);  
    return (num % sum == 0);    
}

bool isHarshadMagicNumber(int num) {
    if (!isHarshadNumber(num)) {
        return false; 
    }

    int sum = sumOfDigits(num);
    return digitalRoot(sum) == 1;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isHarshadMagicNumber(num))
        cout << num << " is a Harshad Magic Number!" << endl;
    else
        cout << num << " is NOT a Harshad Magic Number." << endl;
    
    return 0;
}
