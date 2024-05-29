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
        vector<ll> v;
        ll i = 0;
        ll subarray = (n * (n + 1)) / 2;
        while (i < n)
        {
            if (a[i] % 2 != 0)
            {
                ll cnt = 0;
                while (true)
                {
                    if (a[i] % 2 == 0 || i >= n)
                    {
                        break;
                    }
                    cnt++;
                    i++;
                }
                v.push_back(cnt);
                subarray -= ((cnt * (cnt + 1)) / 2);
            }
            else
            {
                i++;
            }
        }
        sort(v.begin(), v.end());
        ll mx = v[v.size() - 1];
        if (mx % 2 == 0)
        {
            ll mid = mx / 2;
            subarray += (mid * (mid + 1));
        }
        else
        {
            ll mid = (mx / 2) + 1;
            subarray += (mid * mid);
        }

        cout << subarray << endl;
    }

    return 0;
}