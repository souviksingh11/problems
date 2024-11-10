#include <iostream>
using namespace std;

int sumOfDivisors(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; ++i) { 
        if (num % i == 0) {
            sum += i;  
        }
    }
    return sum;
}

bool isAbundantNumber(int num) {
    int sum = sumOfDivisors(num);
    return sum > num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isAbundantNumber(num))
        cout << num << " is an Abundant Number!" << endl;
    else
        cout << num << " is NOT an Abundant Number." << endl;
    
    return 0;
}
