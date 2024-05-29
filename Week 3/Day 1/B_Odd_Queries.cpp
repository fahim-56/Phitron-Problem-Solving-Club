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
        ll n, q;
        cin >> n >> q;
        ll arr[n];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        ll pre_Sum[n];
        pre_Sum[0] = arr[0];
        for (int i = 1; i < n; i++)
        {
            pre_Sum[i] = pre_Sum[i - 1] + arr[i];
        }
        while (q--)
        {
            ll l, r, k;
            cin >> l >> r >> k;
            l -= 1;
            r -= 1;
            ll temp = 0;
            ll q_sum = sum;
            if (l == 0)
            {
                q_sum -= pre_Sum[r];
            }
            else
                q_sum -= pre_Sum[r] - pre_Sum[l - 1];
            q_sum += (r - l + 1) * k;
            if ((q_sum % 2) == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}