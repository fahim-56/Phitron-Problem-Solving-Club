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
        vector<ll> a(n);
        vector<ll> b(m);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++)
        {
            cin >> b[i];
        }

        if (n < 4 or (n + m) < 11 or (m < 4))
        {
            cout << -1 << endl;
            continue;
        }

        sort(a.rbegin(), a.rend());
        sort(b.rbegin(), b.rend());
        ll sum = 0;
        for (int i = 0; i < 4; i++)
        {
            sum += a[i];
            sum += b[i];
        }
        int l = 4, r = 4, cnt = 8;
        while (cnt < 11)
        {
            if (l < n && r < m)
            {
                if (a[l] < b[r])
                {
                    sum += b[r];
                    r++;
                }
                else
                {
                    sum += a[l];
                    l++;
                }
            }
            else if (l < n)
            {
                sum += a[l];
                l++;
            }
            else
            {
                sum += b[r];
                r++;
            }
            cnt++;
        }

        cout << sum << endl;
    }

    return 0;
}