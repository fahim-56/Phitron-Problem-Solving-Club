#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int k, s;
    cin >> k >> s;
    int cnt = 0;
    for (int i = 0; i <= k; i++)
    {
        for (int j = 0; j <= k; j++)
        {
            for (int a = 0; a <= k; a++)
            {
                if (i + j + a == s)
                {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}