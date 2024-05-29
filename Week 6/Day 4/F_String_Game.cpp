#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string t, p;
    cin >> t >> p;
    int n = t.size(), m = p.size();
    vector<ll> a;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a.push_back(x);
    }

    auto valid = [&](int mid)
    {
        vector<bool> deleted(n + 1);
        for (int i = 0; i < mid; i++)
        {
            deleted[a[i]] = true;
        }
        int j = 0;
        int i = 0;
        while (i < n && j < m)
        {
            if (t[i] == p[j] && !deleted[i + 1])
            {
                j++;
            }
            i++;
        }
        return (j == m);
    };

    int l = 0, r = n, mid, ans;
    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (valid(mid))
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    cout << ans << endl;
    return 0;
}