#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    
    auto Valid = [&](ll mid)
    {
        ll cnt = 0;
        for (int i = (n / 2); i < n; i++)
        {
            if (v[i] <= mid)
                cnt += (mid - v[i]);
        }
        return cnt <= k;
    };
    ll l = 1, r = 2e9, ans;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (Valid(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    // for (ll x : v)
    // {
    //     cout << x << " ";
    // }
    return 0;
}