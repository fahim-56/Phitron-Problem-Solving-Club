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
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int happy = 0;
        for (int i = 0; i < n; i++)
        {
            if (((a[i] * 2) < b[i]) || (b[i] * 2) < a[i])
            {
            }
            else
            {
                happy++;
            }
        }
        cout << happy << endl;
    }

    return 0;
}