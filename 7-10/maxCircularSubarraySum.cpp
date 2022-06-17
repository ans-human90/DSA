#include <iostream>
#include <climits>
using namespace std;

int kadane(int arr[], int n)
{

    int maxSum = INT_MIN;
    int currentSum = 0;
    for (int i = 0; i < n; i++)
    {
        currentSum += arr[i];
        if (currentSum < 0)
        {
            currentSum = 0;
        }
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int wrapSum;
    int nonwrapSum;

    nonwrapSum = kadane(arr, n);

    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
        arr[i] = -arr[i];
    }

    wrapSum = totalSum + kadane(arr, n);

    cout << max(wrapSum, nonwrapSum) << endl;

    return 0;
}