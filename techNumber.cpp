#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    string strNum = to_string(num);
    int len = strNum.length();

    if (len % 2 != 0)
    {
        cout << num << " is not a Tech Number.\n";
        return 0;
    }

    int firstPart = stoi(strNum.substr(0, len / 2));
    int secondPart = stoi(strNum.substr(len / 2, len / 2));

    int sum = firstPart + secondPart;
    if (sum * sum == num)
    {
        cout << num << " is a Tech Number.\n";
    }
    else
    {
        cout << num << " is not a Tech Number.\n";
    }

    return 0;
}
