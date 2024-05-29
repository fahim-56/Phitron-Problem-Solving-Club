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
        ll n, m;
        cin >> n >> m;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += max(abs(m - a[i]), abs(a[i] - 1));
        }
        cout << sum << endl;
    }

    return 0;
}