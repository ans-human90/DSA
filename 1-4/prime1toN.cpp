#include <iostream>
using namespace std;
int main()
{
    int number;
    cin >> number;
    int temp = 2;
    while (temp <= number)
    {
        int i;
        for (i = 2; i < temp; i++)
        {
            if (temp % i == 0)
            {
                break;
            }
        }
        if (i == temp)
        {
            cout << i << " ";
        }
        temp++;
    }

    return 0;
}