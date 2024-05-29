#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<ll> v;
    for (ll i = 1; i <= 1e4; i++)
    {
        v.push_back(i * i * i);
    }
    int t;
    cin >> t;
    while (t--)
    {
        ll x;
        cin >> x;
        bool flag = false;
        for (int i = 0; i < 1e4; i++)
        {
            if (v[i] > x)
            {
                break;
            }
            ll a = x - v[i];
            ll l = 0, r = 1e4 - 1;
            while (l <= r)
            {
                ll mid = l + ((r - l) / 2);
                if (v[mid] == a)
                {
                    flag = true;
                    break;
                }
                else if (v[mid] > a)
                {
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
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