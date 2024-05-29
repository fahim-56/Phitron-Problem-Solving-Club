#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    bool freq[26];
    for (char x : s)
    {
        freq[x - 'a'] = true;
    }
    bool flag = true;
    for (char i = 0; i < 26; i++)
    {
        if (!freq[i])
        {
            char k = (i + 'a');
            cout << k << endl;
            flag = false;
            break;
        }
    }
    if (flag)
    {
        cout << "None" << endl;
    }
    return 0;
}