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
        vector<ll> x(n - 1);
        for (int i = 0; i < n - 1; i++)
        {
            cin >> x[i];
        }
        vector<ll> a(n);
        int mx = 1e9;
        a[n - 1] = x[n - 2];
        a[n - 2] = mx;
        int i = n - 3;
        while (i >= 0)
        {
            mx -= x[i];
            a[i] = mx;
            i--;
        }
        for (ll k : a)
            cout << k << " ";
        cout << endl;
    }

    return 0;
}