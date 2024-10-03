#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int arr1[n][m];

    cout << "Enter the element of Arr1[]:" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << endl;
    int n1, m1;
    cin >> n1 >> m1;
    int arr2[n1][m1];

    cout << "Enter the element of Arr2[]:" << endl;
    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cin >> arr2[i][j];
        }
    }
    cout << endl;

    if (m != n1)
    {
        cout << "Matrix Multiplication not possible" << endl;
    }
    int ans[n][m1];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            int value = 0;
            for (int k = 0; k < n1; k++)
            {
                value += arr1[i][k] * arr2[k][j];
            }
            ans[i][j] = value;
        }
    }
    cout << endl;

    cout << "Print the output array:" << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}