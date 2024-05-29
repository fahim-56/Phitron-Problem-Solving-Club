#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // if ((n / 10) == 0)
    // {
    //     cout << "000" << n;
    // }
    // else if ((n / 100) == 0)
    // {
    //     cout << "00" << n;
    // }
    // else if ((n / 1000) == 0)
    // {
    //     cout << "0" << n;
    // }
    // else
    // {
    //     cout << n;
    // }
    int x = n, cnt = 0;
    while (x != 0)
    {
        x = x / 10;
        cnt++;
    }
    for (int i = 0; i < (4 - cnt); i++)
    {
        cout << 0;
    }
    if (n != 0)
        cout << n << endl;

    return 0;
}