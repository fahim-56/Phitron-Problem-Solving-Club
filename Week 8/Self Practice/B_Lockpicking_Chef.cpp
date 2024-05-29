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
        string s, k;
        cin >> s >> k;
        int mn = INT_MAX;
        for (int i = 0; i <= n - m; i++)
        {
            int moves = 0;
            int l = i;
            for (int j = 0; j < m; j++, l++)
            {
                int si = s[l] - '0';
                int ki = k[j] - '0';
                if (si < ki)
                {
                    moves += min(abs(ki - si), abs((si + 10) - ki));
                }
                else if (si > ki)
                {
                    moves += min(abs(si - ki), abs((ki + 10) - si));
                }
            }
            mn = min(moves, mn);
        }
        cout << mn << endl;
    }

    return 0;
}