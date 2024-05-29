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
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        bool flag = true;
        ll z = a[n - 1] + a[n - 2];
        ll l = 0, r = n - 1;
        while (l < r)
        {
            if ((a[l] + a[r]) < z)
            {
            }
            else
            {
                flag = false;
            }
            l++;
            r--;
        }

        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}