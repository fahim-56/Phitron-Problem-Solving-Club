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
        int n, k;
        cin >> n >> k;
        vector<ll> arr(n);

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        ll sum = 0;
        for (int i = 0; i < k; i++)
        {
            if (arr[i] == 1)
            {
                sum += 6;
            }
            else if (arr[i] == 2)
            {
                sum += 5;
            }
            else if (arr[i] == 3)
            {
                sum += 4;
            }
            else
            {
                sum += arr[i];
            }
        }
        for (int i = k; i < n; i++)
        {
            sum += arr[i];
        }

        cout << sum << endl;
    }

    return 0;
}