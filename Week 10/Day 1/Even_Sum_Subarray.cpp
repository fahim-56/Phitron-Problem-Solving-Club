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
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int l = 0, r = 0;
        int ans = 0;
        while (l < n)
        {
            r = l;
            int sum = 0;
            while (r < n)
            {
                sum += a[r];
                if (sum % 2 == 0)
                {
                    ans = max(ans, (r - l + 1));
                }
                r++;
            }

            l++;
        }
        cout << ans << endl;
    }

    return 0;
}