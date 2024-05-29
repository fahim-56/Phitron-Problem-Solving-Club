#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    string t;
    cin >> s >> t;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != t[i])
        {
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}