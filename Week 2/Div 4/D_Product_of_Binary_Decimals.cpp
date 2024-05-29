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
        int x = n;
        bool flag = true;
        while (x != 0)
        {
            int k = x % 10;
            if (k > 1)
            {
                flag = false;
                break;
            }
            x /= 10;
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            
        }
    }

    return 0;
}