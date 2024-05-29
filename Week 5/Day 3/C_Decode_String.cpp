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
        stack<char> st;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '0')
            {
                st.push(char(((s[i - 2] - '0') * 10) + (s[i - 1] - '0') + 96));
                i -= 2;
            }
            else
            {
                st.push(char(s[i] + 48));
            }
        }
        while (!st.empty())
        {
            cout << st.top();
            st.pop();
        }
        cout << endl;
    }

    return 0;
}