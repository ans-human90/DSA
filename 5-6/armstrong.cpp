#include <iostream>
using namespace std;
int main()
{
    int num;
    cin >> num;
    int sum = 0, org_num = num;
    while (num > 0)
    {
        int rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }
    if (org_num == sum)
    {
        cout << "Armstrong Number \n";
    }
    else
    {
        cout << "Not an armstrong number \n";
    }
    return 0;
}