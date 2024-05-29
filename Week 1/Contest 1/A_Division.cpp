#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int rating;
        cin >> rating;
        if (1900 <= rating)
        {
            cout << "Division 1" << endl;
        }
        else if (rating >= 1600 && rating <= 1899)
        {
            cout << "Division 2" << endl;
        }
        else if (rating >= 1400 && rating <= 1599)
        {
            cout << "Division 3" << endl;
        }
        else if (rating <= 1399)
        {
            cout << "Division 4" << endl;
        }
    }

    return 0;
}