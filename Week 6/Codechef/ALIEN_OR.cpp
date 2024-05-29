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
        int n, k;
        cin >> n >> k;
        vector<bool> v(k, false);
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            int cnt = count(s.begin(), s.end(), '1');
            if (cnt == 1)
            {
                for (int i = 0; i < k; i++)
                {
                    if (s[i] == '1')
                    {
                        v[i] = true;
                        break;
                    }
                }
            }
        }
        bool flag = true;
        for (int i = 0; i < k; i++)
        {
            if (v[i] == false)
            {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}