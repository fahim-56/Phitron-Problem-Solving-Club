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
        int n, k;
        cin >> n >> k;
        vector<ll> v(n);
        ll mx = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            mx = max(mx, v[i]);
        }
        ll l = mx / k;
        for (int i = 0; i < n; i++)
        {
            v[i] = (((mx - v[i]) / k) * k) + v[i];
        }
        sort(v.begin(), v.end());
        ll mn = v[n - 1] - v[0];
        for (int i = 0; i < n - 1; i++)
        {
            v[i] += k;
            mn = min(mn, v[i] - v[i + 1]);
        }
        cout << mn << endl;
    }

    return 0;
}