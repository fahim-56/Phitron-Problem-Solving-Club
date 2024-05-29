#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    stack<string> st;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        st.push(s);
    }
    vector<char> store;
    map<string, int> mp;
    while (!st.empty())
    {
        if (mp[st.top()] == 0)
        {
            store.push_back(st.top()[st.top().size() - 2]);
            store.push_back(st.top()[st.top().size() - 1]);
            mp[st.top()]++;
        }
        st.pop();
    }
    for (char x : store)
    {
        cout << x;
    }
    cout << endl;
    return 0;
}