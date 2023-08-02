#include<iostream>
using namespace std;

int main() {

    int n, count = 0;
    cout<< "Enter the number whose bits need to be counted"<<endl;
    cin>>n;
    while( n > 0) {
        n = n & (n-1);
        count++;
    }
    cout<< count<<endl;
}