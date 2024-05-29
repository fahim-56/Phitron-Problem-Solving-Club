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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(n);
        ll mx = 0;
        ll mn = 10e18;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        for (int i = 0; i < n; i++)
        {
            v[i] = (((mx - v[i]) / k) * k) + v[i];
            if (abs(mx - v[i]) > abs(mx - (v[i] + k)))
                v[i] = v[i] + k;
        }
        mx = 0;
        mn = 10e18;
        for (ll l : v)
        {
            mx = max(l, mx);
            mn = min(mn, l);
        }
        cout << abs(mx - mn) << endl;
    }

    return 0;
}