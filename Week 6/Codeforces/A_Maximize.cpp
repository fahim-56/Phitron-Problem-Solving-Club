#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int gcd(int a, int b)
{
    int ans = min(a, b);
    while (ans > 0)
    {
        if ((a % ans == 0) && (b % ans == 0))
        {
            break;
        }
        ans--;
    }
    return ans;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int mx = 1;
        int str = 1;
        for (int i = 1; i < x; i++)
        {
            int y = gcd(x, i);
            if ((y + i) >= mx)
            {
                mx = y + i;
                str = max(str, i);
            }
        }
        cout << str << endl;
    }

    return 0;
}