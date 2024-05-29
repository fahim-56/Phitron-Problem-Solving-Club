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
        string s;
        cin >> s;
        int freq[26] = {0};
        for (char x : s)
        {
            freq[x - 'a']++;
        }
        int cnt = 0;
        for (int i = 0; i < 26; i++)
        {
            if ((freq[i] % 2) == 1)
            {
                // cout << i << " " << freq[i] << endl;
                cnt++;
            }
        }
        cnt--;
        if (cnt <= k)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}