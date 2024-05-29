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
        set<char> b;
        for (char x : s)
        {
            b.insert(x);
        }
        vector<char> v;
        for (char x : b)
        {
            v.push_back(x);
        }
        vector<char> r;
        for (int i = v.size() - 1; i >= 0; i--)
        {
            r.push_back(v[i]);
        }

        vector<char> freq(126, 0);
        for (int i = 0; i < b.size(); i++)
        {
            freq[v[i]] = r[i];
        }
        // for (int i = 0; i < 126; i++)
        // {
        //     if (freq[i] != 0)
        //         cout << freq[i];
        // }
        for (char x : s)
        {
            cout << freq[x];
        }
        cout << endl;
    }

    return 0;
}