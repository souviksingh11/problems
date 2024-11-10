#include <iostream>
#include <string>
using namespace std;

int main()
{
    string num;
    cout << "Enter a number: ";
    cin >> num;

    if (num[0] == '0')
    {
        cout << (num) << " is not a duck number" << endl;
    }

    else
    {
        for (int i = 1; i < num.length(); i++)
        {
            if (num[i] == '0')
            {
                cout << (num) << " is a duck number" << endl;
                break;
            }

            else if(num[i] != '0'){
                cout<<"in this num 0 is not present";
                break;
            }
        }
    }
    return 0;
}