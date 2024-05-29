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
        int match = 0;
        if (n % 2 == 0)
        {
            match = ((n / 2) * ((n / 2) + 1)) / 2;
        }
        else
        {
            match = ((((n / 2) + 1) * ((n / 2) + 2)) / 2) - 1;
        }
        if (match >= m)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}