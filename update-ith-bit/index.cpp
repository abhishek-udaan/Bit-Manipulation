#include<iostream>
using namespace std;

int clearIthBit(int num, int i) {
    int validator_left_shift = 1<< i;
    int final_validator = ~validator_left_shift;
    return num & final_validator;
}

void updateBit(int num, int i, int v) {
    int n1 = clearIthBit(num, i);
    cout <<n1<<endl;
    int mask = v<<i;
    int output = n1|mask;
    cout<<output;
}

int main() {
    
    int num =12;
    int i = 1;
    int v = 1;

    updateBit(num, i, v);
}