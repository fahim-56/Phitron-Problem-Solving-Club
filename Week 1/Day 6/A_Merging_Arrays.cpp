#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int l = 0, r = 0;
    if (m > n)
        while (r < m)
        {
            while (a[l] <= b[r] && l < n)
            {
                cout << a[l] << " ";
                l++;
            }
            cout << b[r] << " ";
            r++;
        }
    else
        while (l < n)
        {
            while (b[r] <= a[l] && r < m)
            {
                cout << b[r] << " ";
                r++;
            }
            cout << a[l] << " ";
            l++;
        }
    return 0;
}