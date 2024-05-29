#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout << "Enter Two Number " << endl;
    int a, b;
    cin >> a >> b;
    cout << "gcd = " << __gcd(a, b) << endl;
    cout << "lcm = " << (a * b) / __gcd(a, b) << endl;
    cout << "lcm = " << ((a / __gcd(a, b)) * b) << endl;

    return 0;
}