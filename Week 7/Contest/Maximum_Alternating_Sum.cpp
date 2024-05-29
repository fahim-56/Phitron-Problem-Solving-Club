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
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        ll sum = 0;
        if (n % 2 == 0)
        {
            int l = 0, r = n - 1;
            while (l <= r)
            {
                sum += (a[r] - a[l]);
                l++;
                r--;
            }
        }
        else
        {
            int l = 0, r = n - 2;
            while (l <= r)
            {
                sum += (a[r] - a[l]);
                l++;
                r--;
            }
            sum += a[n - 1];
        }
        cout << sum << endl;
    }

    return 0;
}