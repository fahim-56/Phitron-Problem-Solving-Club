#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;

    ll s;
    cin >> s;

    ll arr[n];
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll l = 0, r = 0;
    ll mx = 0;
    while (r < n)
    {
        sum += arr[r];
        // cout << (r - l) + 1 << endl;
        if (sum <= s)
        {
            mx = max(mx, ((r - l) + 1));
        }
        else
        {
            sum -= arr[l];
            l++;
        }

        r++;
    }
    cout << mx << endl;
    return 0;
}