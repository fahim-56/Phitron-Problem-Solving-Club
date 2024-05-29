#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    ll a[n];
    ll b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    ll l = 0, r = 0;
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
    for (int i = l; i < n; i++)
    {
        v.push_back(a[l]);
    }
    for (int i = r; i < m; i++)
    {
        v.push_back(b[r]);
    }
    for (ll x : v)
    {
        cout << x << " ";
    }
    return 0;
}