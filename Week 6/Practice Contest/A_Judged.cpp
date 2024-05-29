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
        vector<int> v(5);
        int cnt = 0;

        for (int i = 0; i < 5; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
            {
                cnt++;
            }
        }
        if (cnt >= 4)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}