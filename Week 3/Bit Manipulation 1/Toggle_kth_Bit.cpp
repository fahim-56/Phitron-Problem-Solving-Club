#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cout << "Enter the value :" << endl;
    cin >> n;
    cout << "Which bit do you want to toggle :" << endl;
    cin >> k;
    cout << "The value after toggle " << k << "th bit " << (n ^ (1 << k)) << endl;

    return 0;
}