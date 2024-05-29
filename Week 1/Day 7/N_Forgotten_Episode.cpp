#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n - 1; i++)
    {
        cin >> arr[i];
    }
    sort(arr, arr + (n - 1));
    int k = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != (i + 1))
        {
            k = i + 1;
            break;
        }
    }
    if (k == 0)
    {
        cout << n << endl;
    }
    else
        cout << k << endl;

    return 0;
}