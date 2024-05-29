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
        string a, b;
        cin >> a >> b;
        int l = 0, r = 0;
        int k = 0;
        while (l < n && r < m)
        {
            if (a[l] == b[r])
            {
                k++;
                l++;
            }
            r++;
        }
        cout << k << endl;
    }

    return 0;
}