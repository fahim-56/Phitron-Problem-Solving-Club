#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout << "Enter the highest number" << endl;
    int n;
    cin >> n;
    vector<bool> prime(n, true);
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    for (int i = 2; i <= n; i++)
    {
        if (prime[i])
        {
            cout << i << " ";
        }
    }
    cout << endl;
    cout << "Which number do you want to check...?" << endl;
    int k;
    cin >> k;
    if (prime[k])
        cout << "Prime" << endl;
    else
        cout << "Not Prime" << endl;

    return 0;
}