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
        int n, m;
        cin >> n >> m;
        string a;
        string b;
        cin >> a >> b;
        int l = 0, r = 0;
        int cnt = 0;
        while ((l < n) && (r < m))
        {
            if (a[l] == b[r])
            {
                cnt++;
                l++;
                r++;
            }
            else
            {
                r++;
            }
        }
        // for (char x : a)
        // {
        //     cout << x;
        // }
        cout << cnt << endl;
        // for (char x : b)
        // {
        //     cout << x;
        // }
    }

    return 0;
}