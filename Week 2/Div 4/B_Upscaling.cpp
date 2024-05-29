#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool valid(int i, int j)
{
    if ((i == 0 || i == 1 || i == 4 || i == 5 || i == 8 || i == 9 || i == 12 || i == 13 || i == 16 || i == 17 || i == 20 || i == 21 || i == 24 || i == 25 || i == 28 || i == 29 || i == 32 || i == 33 || i == 36 || i == 37) && (j == 0 || j == 1 || j == 4 || j == 5 || j == 8 || j == 9 || j == 12 || j == 13 || j == 16 || j == 17 || j == 20 || j == 21 || j == 24 || j == 25 || j == 28 || j == 29 || j == 32 || j == 33 || j == 36 || j == 37))
    {
        return true;
    }
    else if ((i == 2 || i == 3 || i == 6 || i == 7 || i == 10 || i == 11 || i == 14 || i == 15 || i == 18 || i == 19 || i == 22 || i == 23 || i == 26 || i == 27 || i == 30 || i == 31 || i == 34 || i == 35 || i == 38 || i == 39) && (j == 2 || j == 3 || j == 6 || j == 7 || j == 10 || j == 11 || j == 14 || j == 15 || j == 18 || j == 19 || j == 22 || j == 23 || j == 26 || j == 27 || j == 30 || j == 31 || j == 34 || j == 35 || j == 38 || j == 39))
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        n *= 2;
        int x = 0, y = 0;
        char mtx[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                mtx[i][j] = '.';
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (valid(i, j))
                    mtx[i][j] = '#';
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << mtx[i][j];
            }
            cout << endl;
        }
    }

    return 0;
}