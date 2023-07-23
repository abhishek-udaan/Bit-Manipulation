#include <iostream>
using namespace std;

int main()
{
    cout << "Odd-Even using Bits manipulation" << endl;
    int num = 5;
    cout << "Enter the number which needs to be checked" << endl;
    cin >> num;
    if (num & 1)
    {
        cout << "Odd";
    }
    else
    {
        cout << "Even";
    }
}