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
        ll a, b;
        cin >> a >> b;
        if (b % a == 0)
        {
            cout << b * (b / a) << endl;
        }
        else
        {
            cout << b * (a / __gcd(a, b)) << endl;
        }
    }

    return 0;
}