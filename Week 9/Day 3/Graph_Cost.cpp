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
        vector<int> a(n + 1);
        for (int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        int ans = INT_MAX;
        for (int i = 2; i < n; i++)
        {
            ans = min((((i - 1) * max(a[i], a[1])) + (abs(n - i) * max(a[i], a[n]))), ans);
        }
        cout << ans << endl;
    }

    return 0;
}