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
        int sum = 1;
        int cnt1 = 0;
        for (char x : s)
        {
            if (x == '1')
            {
                cnt1++;
            }
        }
        if (cnt1 == 1)
        {
            sum += 10;
        }
        if (cnt1 == 3)
        {
            sum -= 10;
        }
        if (cnt1 == 4)
        {
            sum -= 40;
        }
        if (s[0] == '1' && s[3] == '1')
        {
            sum += 120;
        }
        if (s[0] == '1' && s[2] == '1')
        {
            sum += 120;
        }
        if (s[1] == '1' && s[3] == '1')
        {
            sum += 120;
        }
        if (s[1] == '1' && s[2] == '1')
        {
            sum += 120;
        }
        if (s[0] == '1' && s[1] == '1' && s[2] == '0' && s[3] == '0')
        {
            sum += 20;
        }
        if (s[2] == '1' && s[3] == '1' && s[0] == '0' && s[1] == '0')
        {
            sum += 20;
        }
        cout << sum << endl;
    }

    return 0;
}