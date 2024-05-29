#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout << "Enter the number:" << endl;
    int n;
    cin >> n;
    int cnt = 0;
    cout << "On bits are : ";
    for (int i = 0; i < 31; i++)
    {
        if (((n >> i) & 1))
        {
            cnt++;
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "On Bit : " << cnt << endl;
    cout << "Off Bit : " << 31 - cnt << endl;
    return 0;
}