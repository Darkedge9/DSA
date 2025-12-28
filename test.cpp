#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    fastio

        string str = "[1,[20]]";
    int count = 0;
    int ans = 0;

    for (int i = 0; i < str.length(); i++)
    {
        char ch = str[i];

        if (ch == ',')
        {

            continue;
        }
        else if (ch == '[')
            count++;
        else if (ch == ']')
            count--;
        else
        {
            string newstr = "";

            while (i < str.length() && isdigit(str[i]))
            {
                newstr += str[i];
                i++;
            }

            i--; 

            ans += count * stoi(newstr);
        }
    }

    cout << ans;

    return 0;
}