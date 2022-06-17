#include <bits/stdc++.h>

using namespace std;

int main()
{
#ifndef ONLINE_JUGDE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n, m;
    cin >> n;
    cin >> m;
    int matrix[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    int row_start = 0;
    int row_end = n - 1;
    int column_start = 0;
    int column_end = m - 1;
    while (row_start <= row_end && column_start <= column_end)
    {
        for (int i = column_start; i <= column_end; i++)
        {
            cout << matrix[row_start][i] << " ";
        }
        row_start++;
        cout << endl;
        for (int i = row_start; i <= row_end; i++)
        {
            cout << matrix[i][column_end] << endl;
        }
        column_end--;
        for (int i = column_end; i >= column_start && row_start <= row_end; i--)
        {
            cout << matrix[row_end][i] << " ";
        }
        row_end--;
        cout << endl;
        for (int i = row_end; i >= row_start; i--)
        {
            cout << matrix[i][column_start] << endl;
        }
        column_start++;
    }
    return 0;
}