#include <iostream>
using namespace std;

bool isPronicNumber(int num) {
    for (int i = 0; i * (i + 1) <= num; ++i) {
        if (i * (i + 1) == num) {
            return true;
        }
    }
    return false;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (isPronicNumber(num))
        cout << num << " is a Pronic Number!" << endl;
    else
        cout << num << " is NOT a Pronic Number." << endl;
    
    return 0;
}
