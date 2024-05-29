#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool prime(ll n)
{
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin >> n;
    if (prime(n))
    {
        cout << "Prime" << endl;
    }
    else
        cout << "Not Prime" << endl;
    return 0;
}