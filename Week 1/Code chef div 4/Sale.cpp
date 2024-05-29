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
        ll arr[n];
        ll pre[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        pre[0] = arr[0];
        ll mx = pre[0] * 2;
        for (int i = 1; i < n; i++)
        {
            pre[i] = pre[i - 1] + arr[i];
            mx = max(mx, (pre[i] + arr[i]));
        }
        cout << mx << endl;
    }

    return 0;
}