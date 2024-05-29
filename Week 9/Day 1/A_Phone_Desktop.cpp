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
        int x, y;
        cin >> x >> y;
        int total = x + (y * 4);
        int cnt = 0, ycnt = 0;
        ycnt += ceil(y / 2.0);
        int bnd = 0;
        while (bnd < total)
        {
            cnt++;
            bnd += 15;
        }
        cout << max(cnt, ycnt) << endl;
    }

    return 0;
}