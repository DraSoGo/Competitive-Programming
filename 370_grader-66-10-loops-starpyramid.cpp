#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < a - i - 1; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2*i+1; j++)
        {
            if (j % 2 != 0)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << "\n";
    }
    
}