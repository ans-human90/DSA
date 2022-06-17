#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    bool flag = true;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = false;
            break;
        }
    }
    if (n <= 1)
    {
        flag = false;
    }
    if (flag)
    {
        cout << "Prime";
    }
    else
    {
        cout << "Not a prime";
    }

    return 0;
}