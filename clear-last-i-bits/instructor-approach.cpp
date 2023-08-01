#include<iostream>
using namespace std;

int main() {
    int input = 77;
    int i = 4;
    int mask = -1 << i;
    cout << (input & mask);
}