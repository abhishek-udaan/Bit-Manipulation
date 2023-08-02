#include<iostream>
using namespace std;

int main() {
    cout<<"Enter a number which needs to be checked"<<endl;
    int num;
    cin>>num;
    if((num & (num-1)) == 0) {
        cout<<num<< " is a power of 2"<<endl;
    } else {
        cout<<num<< " is not a power of 2"<<endl;
    }
}