#include <bits/stdc++.h>
#define ll long long int
using namespace std;
// ll gcd(ll a, ll b)
// {
//     return __gcd(a, b);
// }
ll lcm(ll a, ll b)
{
    return ((a / __gcd(a, b)) * b);
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n, a, b, p, q;
    cin >> n >> a >> b >> p >> q;
    ll chocolate = 0;
    chocolate += (n / a) * p;
    chocolate += (n / b) * q;
    chocolate -= (n / lcm(a, b)) * (p + q);
    chocolate += (n / lcm(a, b)) * max(p, q);
    cout << chocolate << endl;
    return 0;
}