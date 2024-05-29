#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b, c;
    cin >> a >> b >> c;
    bool flag = false;
    int i = 0;
    while ((a * i) <= c)
    {
        int j = 0;
        while ((b * j) <= c)
        {
            if (((a * i) + (b * j)) == c)
            {
                flag = true;
            }
            j++;
        }
        i++;
    }
    if (flag)
        cout << "Yes";
    else
        cout << "No";
    return 0;
}