#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);


int solve(vector<int>& prices, vector<string>& vitamins, int t) {
    const int INF = 1e9;
    vector<int> dp(8, INF);

    dp[0] = 0;

    for (int i = 0; i < t; i++) {
        int mask = 0;
        for (char ch : vitamins[i]) {
            if (ch == 'A') mask |= 1;
            else if (ch == 'B') mask |= 2;
            else if (ch == 'C') mask |= 4;
        }

        vector<int> newdp = dp;
        for (int s = 0; s < 8; s++) {
            int ns = s | mask;
            newdp[ns] = min(newdp[ns], dp[s] + prices[i]);
        }
        dp = newdp;
    }

    return dp[7] == INF ? -1 : dp[7];
}

int main() {
    fastio

    int t;
    cin >> t;
    vector<int>prices(t);
    vector<string>vitamins(t);
    for (int i = 0; i < t; i++)
    {

        cin>>prices[i] >> vitamins[i];
        cout<<endl;
    } 
    
    cout<<solve(prices, vitamins, t);

    return 0;
}