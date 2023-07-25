#include<iostream>
using namespace std;

int main() {
    cout<< "Set ith Bit"<< endl;
    cout<<"Enter the number"<<endl;
    int num;
    cin>>num;
    int i;
    cout<<"Enter the ith bit"<<endl;
    cin>>i;
    int validator_left_shift = 1<< i;
    int output = num | validator_left_shift;
    cout<< output;
}