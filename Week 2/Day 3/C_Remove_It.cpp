#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    ll k;
    cin >> k;
    ll arr[n];
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] != k)
        {
            v.push_back(arr[i]);
        }
    }
    for (ll x : v)
    {
        cout << x << " ";
    }
    return 0;
}