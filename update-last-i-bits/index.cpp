#include<iostream>
using namespace std;

int main() {
    int num =0;
    int validator = ~num;
    validator = validator<<3;
    cout<<validator<<endl;
    int res = 25 & validator;
    cout<< res;
}