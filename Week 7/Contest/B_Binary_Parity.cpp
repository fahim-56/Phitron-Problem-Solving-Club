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
        ll n;
        cin >> n;
        ll ans, mod, s = 0, mul = 1;
        ans = n;
        while (ans != 0)
        {
            mod = ans % 2;
            s += mod * mul;
            mul *= 10;
            ans /= 2;
        }
        ll cnt = 0;
        while (s != 0)
        {
            if ((s % 10) == 1)
            {
                cnt++;
            }
            s /= 10;
        }

        if (cnt % 2 == 0)
        {
            cout << "EVEN" << endl;
        }
        else
        {
            cout << "ODD" << endl;
        }
    }

    return 0;
}