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
        int n;
        cin >> n;
        vector<int> res;
        int cnt = 0;
        int temp = 0;
        int place = 1;

        while (n != 0)
        {
            int dig = n % 10;
            if (dig == 0)
            {
                n /= 10;
                temp++;
                place *= 10;
                continue;
            }
            else
            {
                res.push_back(dig * place);
                cnt++;
                temp++;
                place *= 10;
            }
            n /= 10;
        }

        cout << cnt << endl;
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << " ";
        }
        cout << endl;
        res.clear();
    }

    return 0;
}
