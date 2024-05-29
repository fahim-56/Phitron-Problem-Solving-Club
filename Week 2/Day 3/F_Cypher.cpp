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
        int arr[n];
        int ans[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            int k;
            cin >> k;
            string s;
            cin >> s;
            for (char x : s)
            {
                if (x == 'U')
                {
                    // cout << arr[i] << endl;
                    arr[i]--;
                    if (arr[i] == -1)
                    {
                        arr[i] = 9;
                    }
                }
                else
                {
                    // cout << arr[i] << endl;
                    arr[i]++;
                    if (arr[i] == 10)
                    {
                        arr[i] = 0;
                    }
                }
            }
            // cout << '\n';
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}