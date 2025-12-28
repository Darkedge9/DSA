#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int t;
    cin >> t;

    vector<int> res(t);
    for (int i = 0; i < t; i++) {
        cin >> res[i];
    }

    int ans = 1;
    int cnt = 1;

    for (int i = 1; i < t; i++) {
        if (res[i] > res[i - 1]) {
            cnt++;
            ans = max(ans, cnt);
        } else {
            cnt = 1;
        }
    }

    cout << ans;
    return 0;
}
