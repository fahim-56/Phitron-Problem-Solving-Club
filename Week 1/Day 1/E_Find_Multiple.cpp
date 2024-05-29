#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    int x = b / c;
    if ((x * c) >= a)
    {
        cout << (x * c);
    }
    else
        cout << -1 << endl;

        
    // int k = a / c;
    // int j = b / c;
    // int flag = -1;
    // for (int i = k; i <= j; i++)
    // {
    //     if ((i * c) >= a && (i * c) <= b)
    //     {
    //         flag = (i * c);
    //         break;
    //     }
    // }
    // cout << flag << endl;
    return 0;
}