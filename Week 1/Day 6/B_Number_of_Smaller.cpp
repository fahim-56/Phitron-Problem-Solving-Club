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
    int r = 0, l = 0;
    while (r < m)
    {
        while (a[l] < b[r] && l < n)
        {
            l++;
        }
        cout << l << " ";
        r++;
    }

    return 0;
}