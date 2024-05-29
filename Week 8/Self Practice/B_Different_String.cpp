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
        string s;
        cin >> s;

        char ck = s[0];
        bool flag = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] != ck)
            {
                s[0] = s[i];
                s[i] = ck;
                flag = true;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
            for (char x : s)
            {
                cout << x;
            }
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}