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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        bool flag = false;
        if (a > b)
        {
            if (a > c && c > b)
            {
                if (a > d && d > b)
                {
                }
                else
                {
                    flag = true;
                }
            }
            else
            {
                if (a > d && d > b)
                {
                    flag = true;
                }
            }
        }
        else
        {
            if (b > c && c > a)
            {
                if (b > d && d > a)
                {
                }
                else
                {
                    flag = true;
                }
            }
            else
            {
                if (b > d && d > a)
                {
                    flag = true;
                }
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}