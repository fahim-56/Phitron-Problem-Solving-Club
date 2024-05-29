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
        ll n, k, B, S;
        cin >> n >> k >> B >> S;
        vector<ll> p(n + 1);
        vector<ll> a(n + 1);

        for (int i = 1; i <= n; i++)
            cin >> p[i];

        for (int i = 1; i <= n; i++)
            cin >> a[i];
        ll starting1 = a[B];
        ll starting2 = a[S];

        vector<ll> position;

        position.push_back(B);
        ll curr1 = B;
        ll next1 = p[B];
        while (next1 != B)
        {
            position.push_back(next1);
            curr1 = next1;
            next1 = p[curr1];
        }

        vector<ll> position2;

        position2.push_back(S);
        ll curr2 = S;
        ll next2 = p[S];
        while (next2 != S)
        {
            position2.push_back(next2);
            curr2 = next2;
            next2 = p[curr2];
        }

        ll age = 0;

        for (int i = 0; i < position.size(); i++)
        {
            if (k < i + 1)
                break;
            ll cur = age;
            cur += (k - i) * a[position[i]];
            starting1 = max(starting1, cur);
            age += a[position[i]];
        }
        ll age1 = 0;

        for (int i = 0; i < position2.size(); i++)
        {
            if (k < i + 1)
                break;
            ll cur = age1;
            cur += (k - i) * a[position2[i]];
            starting2 = max(starting2, cur);
            age1 += a[position2[i]];
        }
        if (starting1 > starting2)
            cout << "Bodya\n";
        else if (starting1 == starting2)
            cout << "Draw\n";
        else
            cout << "Sasha\n";
    }

    return 0;
}