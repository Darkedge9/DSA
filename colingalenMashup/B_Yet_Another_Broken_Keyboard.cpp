#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

vector<bool> typeable(26, 0);

long long solve(int n, vector<int>& a)
{
    long long ans = 0;
    vector<int> dp(n + 1, 0);

    for (int i = 0; i < n; i++) {
        if (a[i] == 0)
            dp[i + 1] = 0;
        else
            dp[i + 1] = dp[i] + 1;

        ans += dp[i + 1];
    }
    return ans;
}

int main()
{
    fastio

    int n, k;
    string s;

    cin >> n >> k;
    cin >> s;

    vector<int> a(n, 0);

    for (int i = 0; i < k; i++) {
        char ch;
        cin >> ch;
        typeable[ch - 'a'] = 1;
    }

    for (int i = 0; i < n; i++) {
        a[i] = typeable[s[i] - 'a'];
    }

    cout << solve(n, a);
    return 0;
}
