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
        vector<ll> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        bool flg = true;

        ll mn = 1e18;

        for (int i = 0; i < n; i++)
        {
            if (b[i] != 0)
            {
                mn = min(mn, a[i] - b[i]);
            }
        }

        if (mn < 0)
        {
            flg = false;
        }

        for (int i = 0; i < n; i++)
        {
            if (mn < (a[i] - b[i]))
            {
                flg = false;
            }
            if (b[i] != 0 && a[i] - b[i] < mn)
            {
                flg = false;
            }
        }

        if (flg)
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