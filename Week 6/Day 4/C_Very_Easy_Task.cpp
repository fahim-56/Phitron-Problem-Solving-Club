#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, x, y;
    cin >> n >> x >> y;
    ll l = 0, r = 1e18;
    ll ans;
    while (l <= r)
    {
        ll mid = (l + ((r - l) / 2));
        ll total = 1 + ((mid - min(x, y)) / x) + ((mid - min(x, y)) / y);
        if (mid < min(x, y))
        {
            l = mid + 1;
        }
        else if (total >= n)
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