#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool fun1(int n, int m, int k)
{
    if (n == m)
    {
        return true;
    }
    if (abs(n - m) > k)
    {
        return false;
    }
    bool x = fun1(n - 1, m + 1, k);
    bool y = fun1(n + 3, m - 1, k);
    return x + y;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        bool flag = false;
        if (n == m)
        {
            flag = true;
        }
        else
        {
            // flag = fun1(n, m, abs(n - m));
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