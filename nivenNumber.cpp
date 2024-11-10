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

bool isNivenNumber(int num) {
    int sum = sumOfDigits(num);  
    return (num % sum == 0);     
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isNivenNumber(num))
        cout << num << " is a Niven Number!" << endl;
    else
        cout << num << " is NOT a Niven Number." << endl;
    
    return 0;
}
