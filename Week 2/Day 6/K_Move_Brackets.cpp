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
        for (char x : s)
        {
            if (x == '(')
            {
                q.push(1);
            }
            else if (x == ')')
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
        }
        cout << cnt << endl;
    }

    return 0;
}