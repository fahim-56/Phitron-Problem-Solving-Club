#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll arr[n];
        ll mn = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            mn = min(mn, arr[i]);
        }
        ll cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > mn)
                cnt += (arr[i] - mn);
        }
        cout << cnt << endl;
    }

    return 0;
}