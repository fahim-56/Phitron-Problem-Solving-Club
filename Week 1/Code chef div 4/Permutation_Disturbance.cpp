#include <bits/stdc++.h>
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
        int arr[n];
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if ((i + 1) == arr[i])
            {
                cnt++;
            }
        }
        if (cnt == 0)
            cout << 0 << endl;
        else
            cout << (cnt - 1) << endl;
    }

    return 0;
}