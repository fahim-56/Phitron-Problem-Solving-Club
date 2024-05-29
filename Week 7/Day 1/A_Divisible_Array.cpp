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

        // for (int i = 1; i <= n; i++)
        // {
        //     cout << i * 2 << " ";
        // }
        vector<int> v;
        for (int i = 1; i <= n; i++)
        {
            v.push_back(i);
        }
        int sum = (n * (n + 1) / 2);
        int cnt = 0;
        if ((sum % n) != 0)
        {
            while ((sum % n) != 0)
            {
                sum++;
                cnt++;
            }
            v[0] += cnt;
            // cout << cnt << endl;
        }
        sum = 0;
        for (int x : v)
        {
            cout << x << " ";
            sum += x;
        }
        cout << sum;
        cout << endl;
    }

    return 0;
}