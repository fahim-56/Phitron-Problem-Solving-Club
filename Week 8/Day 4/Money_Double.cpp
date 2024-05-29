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
        int x, y;
        cin >> x >> y;
        ll sum = x;
        if (x < 1000)
        {
            sum += 1000;
            y--;
            if (y >= 0)
            {
                while (y--)
                {
                    sum *= 2;
                }
            }
        }
        else
        {
            while (y--)
            {
                sum *= 2;
            }
        }
        cout << sum << endl;
    }

    return 0;
}