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
        ll n, w;
        cin >> n >> w;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        // for (int i = 0; i < n; i++)
        // {
        //     cout << a[i] << " ";
        // }
        // cout << endl;
        auto valid = [&](ll mid)
        {
            ll sum = 0;
            for (int i = 0; i < n; i++)
            {
                if (a[i] <= mid)
                    sum += mid - a[i];
                else
                    break;
            }

            return (sum <= w);
        };

        ll l = 0, r = 2e9, ans;
        while (l <= r)
        {
            ll mid = l + (r - l) / 2;
            if (valid(mid))
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
    }

    return 0;
}