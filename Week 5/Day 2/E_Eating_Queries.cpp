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
        ll n, q;
        cin >> n >> q;
        vector<ll> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<ll>());
        vector<ll> pre(n);
        pre[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            pre[i] = v[i] + pre[i - 1];
        }
        // for (int i = 0; i < n; i++)
        // {
        //     cout << pre[i] << " ";
        // }
        // cout << endl;
        while (q--)
        {
            ll x;
            cin >> x;
            int l = 0, r = n - 1;
            int indx = -2;
            while (l <= r)
            {
                int mid = (l + r) / 2;
                if (pre[mid] >= x)
                {
                    indx = mid;
                    r = mid - 1;
                }
                else
                {
                    l = mid + 1;
                }
            }
            cout << indx + 1 << endl;
        }
    }

    return 0;
}