#include <iostream>
using namespace std;

int main()
{

    int row, col;
    cin >> row >> col;
    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Matrix is: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    int x;
    cin >> x;
    bool flag = false;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == x)
            {
                cout << i << " " << j << "\n";
                flag = true;
            }
        }
    }

    if (false)
    {
        cout << "Element is found. \n";
    }
    else
    {
        cout << "Element is not found. \n";
    }

    return 0;
}