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
        int n, s;
        cin >> n >> s;
        int arr[n];
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {

            if (sum == s)
            {
                // cout << i << endl;
                break;
            }
            cnt++;
            sum -= arr[i];
            if (sum == s)
            {
                // cout << i << endl;
                break;
            }
            sum -= arr[n - i - 1];
            if (sum == s)
            {
                // cout << i << endl;
                break;
            }
        }
        cout << cnt << endl;
    }
    return 0;
}