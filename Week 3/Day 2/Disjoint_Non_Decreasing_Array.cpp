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
        int n;
        cin >> n;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            v.push_back(x);
        }
        ll mx = 0;
        vector<int> cnt;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] > v[i + 1])
            {
                cnt.push_back(i + 1);
                mx = max(mx, (v[i] - v[i + 1]));
            }
        }
        for (int x : cnt)
        {
            v[x] += mx;
        }
        vector<ll> vv;
        vv = v;
        sort(v.begin(), v.end());

        if (v == vv)
        {
            cout << "Yes" << endl;
        }
        else
            cout << "No" << endl;
    }

    return 0;
}