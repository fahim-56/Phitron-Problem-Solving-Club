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
        if (n > m)
        {
            cout << n * 2 - 1 << endl;
        }
        else if (n < m)
        {
            cout << m * 2 - 1 << endl;
        }
    }

    return 0;
}