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
        vector<int> freq(3, 0);
        for (int i = 0; i < 9; i++)
        {
            char c;
            cin >> c;
            if (c != '?')
                freq[c - 'A']++;
        }
        for (int i = 0; i < 3; i++)
        {
            if (freq[i] < 3)
            {
                cout << char(i + 'A') << endl;
            }
        }
    }

    return 0;
}