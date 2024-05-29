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
        int mtx[n][n - 1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                cin >> mtx[i][j];
            }
        }
        int cnt[n + 1] = {0};
        for (int i = 0; i < n; i++)
        {
            cnt[mtx[i][0]]++;
        }
        vector<int> v;
        bool freq[n + 1] = {false};
        for (int i = 0; i < n - 1; i++)
        {
            if (cnt[mtx[i][0]] > cnt[mtx[i + 1][0]])
            {
                v.push_back(mtx[i][0]);
                v.push_back(mtx[i + 1][0]);
                freq[mtx[i][0]] = true;
                freq[mtx[i + 1][0]] = true;
                break;
            }
            else if (cnt[mtx[i][0]] < cnt[mtx[i + 1][0]])
            {
                v.push_back(mtx[i + 1][0]);
                v.push_back(mtx[i][0]);
                freq[mtx[i][0]] = true;
                freq[mtx[i + 1][0]] = true;
                break;
            }
        }
        for (int j = 1; j < n - 1; j++)
        {
            for (int i = 0; i < n; i++)
            {
                if (!freq[mtx[i][j]])
                {
                    v.push_back(mtx[i][j]);
                    freq[mtx[i][j]] = true;
                    break;
                }
            }
        }
        for (int x : v)
        {
            cout << x << " ";
        }
        cout << endl;
    }

    return 0;
}