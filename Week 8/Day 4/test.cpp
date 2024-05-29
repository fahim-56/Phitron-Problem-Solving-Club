#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll Summ(ll n)
{
    ll m = 0;
    while (n != 0)
    {
        m = m + n % 10;
        n = n / 10;
    }
    return m;
}
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
        ll sum = 0;
        ll s = 0;
        for (int i = 1; i <= n; i++)
        {
            if (i >= 10)
            {
                sum += Summ(i);
            }
            else
                sum += i;
            s += i;
        }

        if (n >= 10)
            cout << (s - (9 * (Summ(n)))) << endl;
        else
            cout << sum << endl;
    }

    return 0;
}