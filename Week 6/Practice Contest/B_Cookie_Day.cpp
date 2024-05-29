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
        vector<ll> bnd;
        ll mx = 0;
        ll fm = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            fm = max(fm, v[i]);
            ll x = v[i] / k;
            x = x * k;
            bnd.push_back(x);
        }
        sort(v.begin(), v.end());
        for (ll c : bnd)
        {
            mx = max(mx, c);
        }
        if (fm < k)
            cout << -1 << endl;
        else
        {
            int l = lower_bound(v.begin(), v.end(), mx) - v.begin();
            cout << v[l] % k << endl;
        }
    }

    return 0;
}