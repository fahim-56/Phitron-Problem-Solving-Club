#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    auto can_create = [&](ll sec)
    {
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += (sec / v[i]);
            if (cnt >= k)
            {
                return true;
            }
        }
        return false;
    };

    ll l = 1, r = 10e18, ans;
    while (l <= r)
    {
        ll mid = l + ((r - l) / 2);
        if (can_create(mid))
        {
            ans = mid;
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    cout << ans << endl;
    return 0;
}