#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, a, b;
    cin >> n >> a >> b;
    int mn;
    int ans = INT_MIN;
    for (int i = 1; i < n; i++)
    {
        mn = min((a / i), (b / (n - i)));
        ans = max(ans, mn);
    }

    cout << ans << endl;

    return 0;
}