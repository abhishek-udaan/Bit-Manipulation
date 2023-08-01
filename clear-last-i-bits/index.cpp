#include<iostream>
using namespace std;

int setIthBit(int validator, int j) {
    int mask = 1 << j;
    return validator | mask;
}
int main() {
    int input = 77;
    int i = 4, validator = 1;
    for(int j = 1; j <=i; j++) {
       validator = setIthBit(validator, j);
    }
    int finalValidator = validator << i;
    int output = input & finalValidator;
    cout<< output;
}