#include <iostream>
using namespace std;

int getBit(int n, int pos)
{
    return ((n & (1 << pos)) != 0); // 0101 & 0100 = 0100
}

int setBit(int n, int pos)
{
    return (n | (1 << pos)); // 0101 | 0010 = 0111
}

int clearBit(int n, int pos)
{
    int mask = ~(1 << pos); // ~0100 = 1011
    return (n & mask);      // 0101 & 1011 = 0001
}

int updateBit(int n, int pos, int value)
{
    int mask = ~(1 << pos);      //compliment(masking)
    n = (n & mask);              //clearBit
    return (n | (value << pos)); //setBit
}

int main()
{
    // cout << getBit(5, 2) << endl;    //1
    // cout << setBit(5, 1) << endl;    //7
    // cout << clearBit(5, 2) << endl;  //1
    cout << updateBit(5, 1, 1) << endl; //7

    return 0;
}