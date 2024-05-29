#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> v(n);
    ll j;
    cin >> j;
    v[0] = j;
    for (int i = 1; i < n; i++)
    {
        ll k;
        cin >> k;
        v[i] = v[i - 1] + k;
    }
    int q;
    cin >> q;
    while (q--)
    {
        ll x;
        cin >> x;
        cout << lower_bound(v.begin(), v.end(), x) - v.begin() + 1 << endl;
    }

    return 0;
}