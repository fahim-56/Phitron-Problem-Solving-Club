#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (k--)
    {
        ll x;
        cin >> x;
        // int indx = -1;
        // int l = 0, r = n - 1;
        // while (l <= r)
        // {
        //     int mid = (l + r) / 2;
        //     if (arr[mid] <= x)
        //     {
        //         indx = mid;
        //         l = mid + 1;
        //     }
        //     else
        //     {
        //         r = mid - 1;
        //     }
        // }
        // cout << indx + 1 << endl;
        cout << upper_bound(arr.begin(), arr.end(), x)-arr.begin() << endl;
    }

    return 0;
}