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

    ll r = 0;
    ll l = 0;
    ll sum = 0;

    while (r < n && l < m)
    {
        ll cnta = 0;
        ll cntb = 0;
        if (a[r] == b[l])
        {
            ll same = a[r];
            while (r < n && a[r] == same)
            {
                r++;
                cnta++;
            }
            while (l < m && b[l] == same)
            {
                l++;
                cntb++;
            }
            sum += (cnta * cntb);
        }
        else if (a[r] < b[l])
        {
            r++;
        }
        else
        {
            l++;
        }
    }
    cout << sum << endl;
    return 0;
}