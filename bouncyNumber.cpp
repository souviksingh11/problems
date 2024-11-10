#include <iostream>
using namespace std;

bool isBouncyNumber(int num) {
    bool increasing = false;
    bool decreasing = false;

    string strNum = to_string(num);

    for (int i = 1; i < strNum.length(); ++i) {
        if (strNum[i] > strNum[i - 1]) {
            increasing = true;
        } else if (strNum[i] < strNum[i - 1]) {
            decreasing = true;
        }

        if (increasing && decreasing) {
            return true;
        }
    }
    return false;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isBouncyNumber(num))
        cout << num << " is a Bouncy Number!" << endl;
    else
        cout << num << " is NOT a Bouncy Number." << endl;

    return 0;
}
