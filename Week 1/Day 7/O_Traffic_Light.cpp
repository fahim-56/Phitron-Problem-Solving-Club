#include <iostream>
#include <string>

using namespace std;

int minCrossingTime(string s, char c, int n)
{
    // s += s;
    int currentPosition = s.find(c); // Find current color position
    int distance = 0;
    int mx = 0;
    // Find distance to the next green light
    for (int i = currentPosition + 1; i < s.size(); ++i)
    {
        if (s[i] == 'g')
        {
            distance = i - currentPosition;
            mx = max(distance, mx);
            break;
        }
    }

    if (distance < n)
    { // Green light within current cycle
    return mx;
    }
    else
    { // Need to consider cycle overflow
        int remainingTime = n - currentPosition;
        return remainingTime + s.find('g'); // Distance to green in next cycle
    }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n;
        char c;
        string s;
        cin >> n >> c >> s;
        int minTime = minCrossingTime(s, c, n);
        cout << minTime << endl;
    }
    return 0;
}
