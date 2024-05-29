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
        int anm = 0;
        anm += (n / 4);
        
        int mod = n % 4;
        anm += mod / 2;
        cout << anm << endl;
    }

    return 0;
}