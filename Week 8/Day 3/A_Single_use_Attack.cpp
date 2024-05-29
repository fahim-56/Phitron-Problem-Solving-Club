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
        int h, x, y;
        cin >> h >> x >> y;
        int cnt = 1;
        h -= y;
        while (h > 0)
        {
            h -= x;
            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}