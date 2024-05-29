#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, s;
    cin >> n >> s;
    ll arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int l = 0, r = 0;
    ll sum = arr[0];
    ll ans = 0;
    while (l < n)
    {
        if (l >= (n - (r - l + 1)) && sum < s)
        {
            break;
        }
        if (sum >= s)
        {
            ans += (r - l + 1);
            cout << l << " " << r << " " << ans << endl;
            sum -= arr[l];
            l++;
        }
        else
        {
            cout << l << " " << r << endl;
            r++;
            sum += arr[r];
        }
    }
    cout << ans;

    return 0;
}