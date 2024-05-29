#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int mtx[n][m];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mtx[i][j];
            }
        }
        ll mx = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                int x = i;
                int y = j;
                ll sum = 0;
                while (x != -1 && y != -1)
                {
                    sum += mtx[x][y];
                    x--;
                    y--;
                }
                x = i + 1;
                y = j + 1;
                while (x != n && y != m)
                {
                    sum += mtx[x][y];
                    x++;
                    y++;
                }
                x = i - 1;
                y = j + 1;
                while (x != -1 && y != m)
                {
                    sum += mtx[x][y];
                    x--;
                    y++;
                }
                x = i + 1;
                y = j - 1;
                while (x != n && y != -1)
                {
                    sum += mtx[x][y];
                    x++;
                    y--;
                }

                // cout << sum << " ";
                mx = max(sum, mx);
            }
        }
        cout << mx << endl;
    }

    return 0;
}