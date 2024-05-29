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
        bool flag = true;
        if (s[0] == 'M' || s[0] == 'm')
        {
        }
        else
        {
            cout << "NO" << endl;
            continue;
        }
        if (s[n - 1] == 'W' || s[n - 1] == 'w')
        {
        }
        else
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 1; i < n; i++)
        {
            if (s[i] == 'm' || s[i] == 'M')
            {
                if (s[i - 1] == 'm' || s[i - 1] == 'M')
                {
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            else if (s[i] == 'e' || s[i] == 'E')
            {
                if (s[i - 1] == 'm' || s[i - 1] == 'M' || s[i - 1] == 'e' || s[i - 1] == 'E')
                {
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            else if (s[i] == 'o' || s[i] == 'O')
            {
                if (s[i - 1] == 'o' || s[i - 1] == 'O' || s[i - 1] == 'e' || s[i - 1] == 'E')
                {
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            else if (s[i] == 'w' || s[i] == 'W')
            {
                if (s[i - 1] == 'o' || s[i - 1] == 'O' || s[i - 1] == 'w' || s[i - 1] == 'W')
                {
                }
                else
                {
                    flag = false;
                    break;
                }
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}