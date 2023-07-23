#include<iostream>
using namespace std;

int main() {
    int num, i;
    cout<< "Enter the number you want find the ith Bit"<< endl;
    cin >> num;
    cout<< "Enter the bit you want to check"<<endl;
    cin >> i;
    int validator = num >> i;
    cout << "The iTh bit is"<< (validator & 1)<<endl;
}