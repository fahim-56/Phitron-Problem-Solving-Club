#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        int n = (c * 2) + 1;
        int i = c;
        int cnt = 0;
        while (i < n)
        {
            i += a;
            cnt++;
        }
        i = c;
        while (i < n)
        {
            i += b;
            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}