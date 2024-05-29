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
        int l, v1, v2;
        cin >> l >> v1 >> v2;
        if (l % v1 == 0)
        {
            v1 = l / v1;
        }
        else
        {
            v1 = (l / v1) + 1;
        }
        if (l % v2 == 0)
        {
            v2 = l / v2;
        }
        else
        {
            v2 = (l / v2) + 1;
        }
        // cout << v1 << " " << v2 << endl;
        if (v1 > v2)
        {
            cout << (v1 - v2) - 1 << endl;
        }
        else
            cout << -1 << endl;
    }

    return 0;
}