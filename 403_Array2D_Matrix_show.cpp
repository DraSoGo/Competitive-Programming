#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, a, b, x, m, o, p, ch = 0;
    cin >> n >> m;
    int A[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << "\n";
    }
}