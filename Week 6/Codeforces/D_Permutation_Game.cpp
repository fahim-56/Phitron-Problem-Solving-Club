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
        ll n, k, b, s;
        cin >> n >> k >> b >> s;
        b--;
        s--;
        vector<ll> p(n);
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> p[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll sum1 = 0, sum2 = 0;
        while (k--)
        {
            sum1 += a[b];
            sum2 += a[s];
            ll x = (p[b] - 1), y = (p[s] - 1);
            if (a[b] <= a[x])
            {
                b = x;
            }
            if (a[s] <= a[y])
            {
                s = y;
            }
        }
        if (sum1 > sum2)
        {
            cout << "Bodya" << endl;
        }
        else if (sum1 < sum2)
        {
            cout << "Sasha" << endl;
        }
        else
            cout << "Draw" << endl;
    }

    return 0;
}