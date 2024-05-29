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
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll i = 0, j = 0, k = 0;
        ll cnt = 0;
        int cnta, cntb, cntc;
        queue<int> inx;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'a')
            {
                cnta = i;
            }
            else if (s[i] == 'b')
            {
                cntb = i;
            }
            else if (s[i] == 'c')
            {
                cntc = i;
            }
        }
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'c')
            {
                inx.push(i);
            }
        }

        while (i <= cnta)
        {
            if (s[i] == 'a')
            {
                j = i + 1;
                while (j <= cntb && s[j] != 'b')
                {
                    j++;
                }
                if (s[j] == 'b')
                {
                    k = j + 1;
                    while (k <= cntc && s[k] != 'c')
                    {
                        k++;
                    }
                    if (s[k] == 'c')
                    {
                        s[k] = 'v';
                        cnt++;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    break;
                }
            }
            i++;
        }
        cout << cnt << '\n';
    }

    return 0;
}