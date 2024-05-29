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
        vector<ll> v(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> v[i];
        }
        vector<ll> a(n);
        a[0] = v[0] + 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] >= a[i])
            {
                while (v[i] >= a[i])
                {
                    a[i] += a[i - 1];
                }
            }
            a[i + 1] = a[i] + v[i];
        }
        for (ll x : a)
            cout << x << " ";
        cout << endl;
    }
    // cout << 8 % 3 << endl;
    return 0;
}