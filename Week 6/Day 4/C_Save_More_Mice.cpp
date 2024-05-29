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
        ll n, k;
        cin >> n >> k;
        vector<ll> v(k);
        for (int i = 0; i < k; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end(), greater<ll>());
        ll cnt = 0, cat_pos = 0;
        for (ll x : v)
        {
            if (x <= cat_pos)
            {
                break;
            }
            cnt++;
            cat_pos += (n - x);
        }
        cout << cnt << endl;
    }

    return 0;
}