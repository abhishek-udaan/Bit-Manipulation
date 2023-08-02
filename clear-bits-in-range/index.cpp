#include<iostream>
using namespace std;

int main() {
    int num = 29;
    int i = 1, j = 3;
    int mask1 = -1<<(j+1);
    int mask2 = (1<<i) -1;
    int maskFinal = mask1 | mask2;
    int output = num & maskFinal;
    cout<< output;
}