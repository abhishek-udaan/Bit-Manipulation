#include<iostream>
using namespace std;

int main() {
    int N = 105, M = 9, i = 1, j = 4;

    // Clearing bits in the range i to j for N
    int mask1 = (-1) << (j+1);
    int mask2 = (1 << i) - 1;
    int mask3 = mask1 | mask2;
    int bitsClearedInRange = N & mask3;

    // left shift M by i
    int mask4 = M << 1;
    
    int output = bitsClearedInRange | mask4;
    cout<< output << endl;
}