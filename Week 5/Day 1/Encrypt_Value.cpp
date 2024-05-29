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
        vector<ll> v(n);

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        ll s = v[0];
        for (int i = 1; i < n; i++)
        {
            if ((v[i] * s) > (v[i] + s))
            {

                s = (v[i] * s);
            }
            else
            {
                s = (v[i] + s);
            }
        }
        cout << s << endl;
    }

    return 0;
}