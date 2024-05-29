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
        int a, b;
        cin >> a >> b;
        vector<int> al;
        vector<int> bob;
        al.push_back(a);
        int k = 10 * (a % 10) + (a / 10);
        al.push_back(k);
        bob.push_back(b);
        int l = 10 * (b % 10) + (b / 10);
        bob.push_back(l);
        bool flag = false;
        for (int x : al)
        {
            for (int y : bob)
            {
                if (x > y)
                {
                    flag = true;
                }
            }
        }
        if (flag)
        {
            cout << "Yes" << endl;
        }
        else
        {
            cout << "No" << endl;
        }
    }

    return 0;
}