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
        int cnt1 = 0, cnt0 = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '1')
            {
                while (i < n && s[i] != '0')
                {
                    i++;
                }
                i--;
                cnt1++;
            }
            else
            {
                // cout << i << " ";
                while (i < n && s[i] != '1')
                {

                    i++;
                }
                i--;
                // cout << i << " " << endl;
                cnt0++;
            }
        }
        cout << min(cnt0, cnt1) << endl;
    }

    return 0;
}