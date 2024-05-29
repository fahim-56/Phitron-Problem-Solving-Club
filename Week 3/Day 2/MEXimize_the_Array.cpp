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
        ll arr[n];
        int freq[n + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            freq[arr[i]]++;
        }
        vector<ll> v;
        for (int i = n - 1; i >= 0; i--)
        {
            if (freq[i] == 0)
            {
                v.push_back(i);
            }
        }
        vector<ll> vv;

        for (int i = n - 1; i >= 0; i--)
        {
            if (freq[i] == 0)
            {
                v.push_back(i);
            }
        }
    }

    return 0;
}