#include<iostream>
using namespace std;

int main() {
    cout<< "clear ith Bit"<< endl;
    cout<<"Enter the number"<<endl;
    int num;
    cin>>num;
    int i;
    cout<<"Enter the ith bit"<<endl;
    cin>>i;
    int validator_left_shift = 1<< i;
    int final_validator = ~validator_left_shift;
    int output = num & final_validator;
    cout<< output;
}