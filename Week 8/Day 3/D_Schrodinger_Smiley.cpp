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
        int i = 0, j = 0;
        int cnt = 0;
        while (i < n && j < n)
        {
            if (s[i] == ':')
            {
                j = i + 1;
                while (j < n && s[j] == ')')
                {
                    j++;
                }
                if (j < n && j != i + 1 && s[j] == ':')
                {
                    cnt++;
                }
            }
            i++;
        }
        cout << cnt << endl;
    }

    return 0;
}