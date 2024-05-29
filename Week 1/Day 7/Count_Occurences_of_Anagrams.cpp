#include <bits/stdc++.h>
using namespace std;
int search(string pat, string txt)
{

    int freq[26] = {0};
    for (char x : pat)
    {
        freq[x - 'a']++;
    }

    int l = 0;
    int r = pat.size() - 1;
    int cnt = 0;
    int temp[26] = {0};
    for (int i = l; i <= r; i++)
    {
        temp[txt[i] - 'a']++;
    }
    while (r < txt.size())
    {
        bool flag = true;
        for (int i = 0; i < 26; i++)
        {
            if (freq[i] != temp[i])
            {
                flag = false;
                break;
            }
        }

        if (flag)
        {
            cnt++;
        }
        temp[txt[l] - 'a']--;
        l++;
        r++;
        temp[txt[r] - 'a']++;
    }
    return cnt;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string pat, txt;
    cin >> txt >> pat;

    cout << search(pat, txt) << endl;
    return 0;
}