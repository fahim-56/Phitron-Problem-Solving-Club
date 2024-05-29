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
        queue<int> q;
        int cnt = 0;
        for (int i = 0; i < (n / 2); i++)
        {
            if (s[i] == ')')
            {
                if (q.empty())
                {
                    cnt++;
                }
                else
                {
                    q.pop();
                }
            }
            else
            {
                q.push(1);
            }
        }
        cout << cnt << endl;
    }

    return 0;
}