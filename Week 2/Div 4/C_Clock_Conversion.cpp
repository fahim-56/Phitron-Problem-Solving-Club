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
        string s;
        cin >> s;
        if (s[0] == '0')
        {
            if (s[1] == '0')
            {
                for (int i = 0; i < 5; i++)
                {
                    if (i == 0)
                        cout << 1;

                    else if (i == 1)
                        cout << 2;
                    else
                        cout << s[i];
                }
                cout << " AM" << endl;
                continue;
            }
            else
            {
                cout << s << " AM" << endl;
                continue;
            }
        }
        else if (s[0] == '1')
        {
            int x = 10 + (s[1] - '0');
            if (x < 12)
            {
                cout << x << ":" << s[3] << s[4] << " AM" << endl;
            }
            else if (x == 12)
            {
                cout << x << ":" << s[3] << s[4] << " PM" << endl;
            }
            else
            {
                if (x - 12 < 10)
                {
                    cout << 0;
                }
                cout << x - 12 << ":" << s[3] << s[4] << " PM" << endl;
            }
        }
        else
        {
            int x = (s[0] - '0') * 10 + (s[1] - '0');
            if (x == 24)
            {
                cout << "12:00 PM" << endl;
                continue;
            }
            if (x - 12 < 10)
            {
                cout << 0;
            }
            cout << x - 12 << ":" << s[3] << s[4] << " PM" << endl;
        }
    }

    return 0;
}