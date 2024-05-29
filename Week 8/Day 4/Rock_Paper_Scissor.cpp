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

        string s;
        cin >> s;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            if ((i + 1 < n) && s[i] == s[i + 1])
            {
                i++;
            }
            cnt++;
        }
        cout << cnt << endl;
    }

    return 0;
}