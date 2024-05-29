#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, l, r;
        cin >> n >> l >> r;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int cnt = 0;
        int mx = 0;
        int mn = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] >= l && arr[i] <= r)
            {
                cnt++;
            }
            else
            {
                cnt--;
            }
            mn = min(mn, cnt);
            mx = max(cnt, mx);
        }
        cout << mx << " " << mn << endl;
    }
}
