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
        int a, b, c;
        cin >> a >> b >> c;
        if (a < b && b < c)
        {
            cout << "STAIR" << '\n';
        }
        else if (a < b && b > c)
        {
            cout << "PEAK" << '\n';
        }
        else
        {
            cout << "NONE" << '\n';
        }
    }

    return 0;
}