#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    fastio

        int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin>>str;
        int firstIdx = 0;
        int lastIdx = 0;
        for (int i = 0; i < str.length(); i++)
        {
            if (str[i] == '1')
            {
                firstIdx = i;
                break;
            }
        }
        for (int i = str.length() - 1; i >= 0; i--)
        {
            if (str[i] == '1')
            {
                lastIdx = i;
                break;
            }
        }
        int count = 0;

        for (int i = firstIdx + 1; i < lastIdx; i++)
        {
            if (str[i] == '0')
            {
                count++;
            }
        }

        cout << count << endl;
    }

    return 0;
}