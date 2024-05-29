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
        int cnt = 0;
        string s;
        cin >> s;
        char c = s[0];
        for (int i = 0; i < s.size(); i++)
        {
            if (c != s[i])
            {
                cnt++;
                c = s[i];
            }
        }
        if (cnt == 0)
        {
            cout << 1 << endl;
        }
        else if (cnt == 1)
        {
            if (s[0] == '0')
            {
                cout << 1 << endl;
            }
            else
                cout << 2 << endl;
        }
        else
        {
            cout << cnt << endl;
        }
    }

    return 0;
}