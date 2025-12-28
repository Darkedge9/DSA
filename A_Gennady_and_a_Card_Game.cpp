#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    fastio

        string str;
    cin >> str;
    vector<string> newstr(5);
    for (int i = 0; i < 5; i++)
    {
        cin >> newstr[i];
    }
    bool ans = false;
    for (int i = 0; i < 5; i++)
    {
        if (str[0] == newstr[i][0] || str[0] == newstr[i][1] || str[1] == newstr[i][0] || str[1] == newstr[i][1])
        {
            ans = true;
            break;
        }
    }

    if(ans)cout<<"YES";
    else cout<<"NO";

    return 0;
}