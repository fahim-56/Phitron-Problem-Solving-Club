#include <bits/stdc++.h>
using namespace std;
long maximumSumSubarray(int k, vector<int> &Arr, int N)
{
    long sum = 0;
    for (int i = 0; i < k; i++)
    {
        sum += Arr[i];
    }
    long mx = 0;
    mx = max(mx, sum);
    for (int i = 0; i < N; i++)
    {
        if (k >= N)
            break;
        sum = sum - Arr[i] + Arr[k];
        mx = max(mx, sum);
        k++;
    }
    return mx;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }

    cout << maximumSumSubarray(k, arr, n);

    return 0;
}