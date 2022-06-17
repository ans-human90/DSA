#include <iostream>
using namespace std;

bool triplet_check(int a, int b, int c)
{
    int big = max(a, max(b, c));
    int sum = a * a + b * b + c * c - big * big;
    if (sum == (big * big))
        return true;
    return false;
}

bool check(int x, int y, int z)
{
    int a = max(x, max(y, z));
    int b, c;
    if (a == x)
    {
        b = y;
        c = z;
    }
    else if (a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }
    if (a * a == b * b + c * c)
    {
        return true;
    }
    return false;
}

int main()
{
    int x, y, z;
    cin >> x >> y >> z;
    if (check(x, y, z))
    {
        cout << "Pythagoream Triplet \n";
    }
    else
    {
        cout << "Not a Pythagoream Triplet \n";
    }

    return 0;
}