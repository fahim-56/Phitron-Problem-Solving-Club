#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxDistinctColors(int X, int Y, int Z)
{
    int secondary = min(X, Y) + min(Y, Z) + min(Z, X) - min({X, Y, Z});
    int remaining_primary = 0;
    if (X > secondary)
        remaining_primary++;
    if (Y > secondary)
        remaining_primary++;
    if (Z > secondary)
        remaining_primary++;
    return secondary + remaining_primary;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int X, Y, Z;
        cin >> X >> Y >> Z;
        cout << (maxDistinctColors(X, Y, Z)) << endl;
    }

    return 0;
}
