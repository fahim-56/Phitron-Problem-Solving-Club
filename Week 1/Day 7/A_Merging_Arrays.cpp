#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, m;
    cin >> n >> m;
    ll a[n];
    ll b[m];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    ll l = 0;
    ll r = 0;
    vector<ll> v;
    while (l < n || r < m)
    {
        if (a[l] <= b[r])
        {
            v.push_back(a[l]);
            l++;
        }
        else
        {
            v.push_back(b[r]);

            r++;
        }
    }
    // while (l < n)
    // {
    //     v.push_back(a[l]);
    //     l++;
    // }
    // while (r < m)
    // {
    //     v.push_back(b[r]);
    //     r++;
    // }

    for (ll x : v)
    {
        cout << x << " ";
    }
    return 0;
}