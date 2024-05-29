#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        vector<string> a, b, c;

        int n;
        cin >> n;
        map<string, int> mp;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            mp[s]++;
            a.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            mp[s]++;
            b.push_back(s);
        }
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            mp[s]++;
            c.push_back(s);
        }

        int cnt1 = 0, cnt2 = 0, cnt3 = 0;

        for (string x : a)
        {
            if (mp[x] == 1)
            {
                cnt1 += 3;
            }
            else if (mp[x] == 2)
            {
                cnt1 += 1;
            }
        }
        cout << cnt1 << " ";
        for (string x : b)
        {
            if (mp[x] == 1)
            {
                cnt2 += 3;
            }
            else if (mp[x] == 2)
            {
                cnt2 += 1;
            }
        }
        cout << cnt2 << " ";
        for (string x : c)
        {
            if (mp[x] == 1)
            {
                cnt3 += 3;
            }
            else if (mp[x] == 2)
            {
                cnt3 += 1;
            }
        }
        cout << cnt3 << " ";
        cout << endl;
    }

    return 0;
}