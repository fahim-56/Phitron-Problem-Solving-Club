#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    ll arr[n];

    ll sum = 0;
    ll mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
        if (arr[i] % 2 == 1 && arr[i] < mn)
        {
            mn = arr[i];
        }
    }
    if (sum % 2 == 0)
    {
        cout << sum << endl;
    }
    else
        cout << sum - mn << endl;
    return 0;
}