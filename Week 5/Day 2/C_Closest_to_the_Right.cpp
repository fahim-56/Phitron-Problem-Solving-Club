#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    while (k--)
    {
        ll x;
        cin >> x;
        // int l = 0, r = n - 1;
        // int indx = n;
        // while (l <= r)
        // {
        //     int mid = (l + r) / 2;
        //     if (v[mid] >= x)
        //     {
        //         indx = mid;
        //         r = mid - 1;
        //     }
        //     else
        //     {
        //         l = mid + 1;
        //     }
        // }
        // cout << indx + 1 << endl;
        cout << lower_bound(v.begin(), v.end(), x) - v.begin() + 1 << endl;
    }

    return 0;
}