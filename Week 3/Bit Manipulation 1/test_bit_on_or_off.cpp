#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout << "Enter the number:" << endl;
    int n;
    cin >> n;
    cout << "Which bit do you want to check" << endl;
    int k;
    cin >> k;
    cout << ((n >> k) & 1) << endl;
    return 0;
}