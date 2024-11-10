#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, temp, sum = 0, digitCount = 0;

    cout << "Enter a number: ";
    cin >> num;

    temp = num;

    while (temp != 0) {
        digitCount++;
        temp /= 10;
    }

    temp = num;
    int position = digitCount;

    while (temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, position);
        position--;
        temp /= 10;
    }

    if (sum == num) {
        cout << num << " is a Disarium Number.\n";
    } else {
        cout << num << " is not a Disarium Number.\n";
    }

    return 0;
}
