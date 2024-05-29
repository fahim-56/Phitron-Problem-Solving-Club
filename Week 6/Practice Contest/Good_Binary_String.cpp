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
        int pre = 1;
        vector<int> v;
        for (int i = 0; i < n - 1; i += 2)
        {
            if (s[i] != s[i + 1])
            {
                if (s[i] - '0' != pre)
                {
                    v.push_back(i);
                    pre = s[i] - '0';
                }
                else
                {
                    v.push_back(i + 1);
                    pre = s[i + 1] - '0';
                }
            }
        }

        cout << v.size() << endl;

        for (int x : v)
        {
            cout << x + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}