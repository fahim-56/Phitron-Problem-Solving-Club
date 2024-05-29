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
        int n;
        cin >> n;
        string s, k;
        cin >> s >> k;
        bool flag = true;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'G')
            {
                s[i] = 'B';
            }
            if (k[i] == 'G')
            {
                k[i] = 'B';
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (s[i] != k[i])
                flag = false;
        }
        if (flag)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }

    return 0;
}