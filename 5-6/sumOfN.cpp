#include <iostream>
using namespace std;

int sum(int n)
{
    //here, we can also use the formula
    // s = n*(n+1)/s
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}

int main()
{
    int n;
    cin >> n;
    cout << sum(n) << endl;

    return 0;
}