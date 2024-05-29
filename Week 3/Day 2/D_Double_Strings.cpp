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
        vector<string> s;
        map<string, bool> mp;
        for (int i = 0; i < n; i++)
        {
            string k;
            cin >> k;
            s.push_back(k);
            mp[k] = true;
        }
        vector<int> v(n, 0);
        for (int k = 0; k < n; k++)
        {
            string x = s[k];
            for (int i = 1; i <= x.size(); i++)
            {
                // cout << x.substr(0, i) << " " << x.substr(i, x.size() - i) << endl;
                if (mp[x.substr(0, i)] && mp[x.substr(i, x.size() - i)])
                {
                    v[k] = 1;
                }
            }
        }
        for (int x : v)
        {
            cout << x;
        }
        cout << endl;
    }

    return 0;
}