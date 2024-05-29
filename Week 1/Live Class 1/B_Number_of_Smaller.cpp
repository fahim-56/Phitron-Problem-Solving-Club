#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
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
    while (r < m)
    {
        if (a[l] < b[r])
        {
            l++;
        }
        else
        {
            cout << l << " ";
            r++;
        }
    }

    return 0;
}