#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, h;
        cin >> n >> h;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll l = 0, r = 1e9;
        ll x;
        ll ans;
        while (l <= r)
        {
            x = l + ((r - l) / 2);
            ll k = h;
            for (ll i = 0; i < n; i++)
            {
                if (x < a[i])
                {
                    k -= a[i];
                }
            }
            if (k > 0)
            {
                ans = x;
                r = x - 1;
            }
            else
            {
                l = x + 1;
            }
        }
        cout << ans << endl;
    }

    return 0;
}