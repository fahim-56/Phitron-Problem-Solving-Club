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
        string a;
        cin >> a;
        int l = 0, r = 0;
        int ans = 0;
        while (l < n)
        {
            r = l;
            while (r < n)
            {
                int cnt0 = 0, cnt1 = 0;
                for (int i = l; i <= r; i++)
                {
                    if (a[i] == '1')
                    {
                        cnt1++;
                    }
                    else
                    {
                        cnt0++;
                    }
                }
                if (cnt0 == 0 || cnt1 == 0)
                {
                    ans += 1;
                }
                else if (cnt0 == cnt1)
                {
                    ans += 2;
                }
                else
                    ans += abs(cnt0 - cnt1);
                r++;
            }
            l++;
        }
        cout << ans << endl;
    }

    return 0;
}