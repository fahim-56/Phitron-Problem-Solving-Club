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
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int k;
    cin >> k;
    sort(v.begin(), v.end());

    while (k--)
    {
        int x, y;
        cin >> x >> y;
        int l = lower_bound(v.begin(), v.end(), x) - v.begin();
        int r = upper_bound(v.begin(), v.end(), y) - v.begin();
        cout << r - l << " ";
    }

    return 0;
}