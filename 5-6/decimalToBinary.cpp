#include <iostream>
using namespace std;
int main()
{
    int number, arr[50], i = 0;
    cin >> number;
    while (number > 0)
    {
        arr[i] = number % 2;
        number /= 2;
        i++;
    }
    for (i = i - 1; i >= 0; i--)
    {
        cout << arr[i];
    }

    return 0;
}