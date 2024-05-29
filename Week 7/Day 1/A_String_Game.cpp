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
        int cnt1 = 0, cnt2 = 0, cnt = INT_MAX;

        for (int i = 0; i < n ; i++)
        {
            if (s[i] == '0')
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
        }
        cnt = min(cnt1, cnt2);
        // cout << cnt << endl;
        if (cnt % 2 == 0)
        {
            cout << "Ramos" << endl;
        }
        else
        {
            cout << "Zlatan" << endl;
        }
    }

    return 0;
}