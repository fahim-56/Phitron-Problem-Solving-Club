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
        ll a, b, c;
        cin >> a >> b >> c;
        ll sum = a;
        bool flag = false;
        if ((b % 3) == 0)
        {
            sum += (b / 3);
            int mod = c % 3;
            sum += (c / 3);
            sum += mod / 2;
            mod = mod % 2;
            sum += mod;
        }
        else if ((b % 3) == 1)
        {
            if (c >= 2)
            {
                c -= 2;
                b += 2;
                sum += (b / 3);
            }
            else
            {
                flag = true;
            }
            if (c != 0)
            {
                int mod = c % 3;
                sum += (c / 3);
                sum += mod / 2;
                mod = mod % 2;
                sum += mod;
            }
        }
        else if ((b % 3) == 2)
        {
            if (c >= 1)
            {
                c -= 1;
                b += 1;
                sum += (b / 3);
            }
            else
            {
                flag = true;
            }
            if (c != 0)
            {
                int mod = c % 3;
                sum += (c / 3);
                sum += mod / 2;
                mod = mod % 2;
                sum += mod;
            }
        }
        if (flag)
            cout << -1 << endl;
        else
            cout << sum << '\n';
    }
    return 0;
}