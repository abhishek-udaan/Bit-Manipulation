#include<iostream>
using namespace std;

int main() {

    int n, count = 0;
    cout<< "Enter the number whose bits need to be counted"<<endl;
    cin>>n;
    while( n > 0) {
        int last_bit = n & 1;
        count = count + last_bit;
        n = n >> 1;
        
    }
    cout<< count<<endl;
}