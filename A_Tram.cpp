#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int t;
    cin >> t;
    vector<int>a(t), b(t);
    for(int i = 0; i< t; i++){
        cin>>a[i]>>b[i];
    }
    int cur = b[0];
int ans = cur;

for (int i = 1; i < t; i++) {
    cur += b[i] - a[i];
    ans = max(ans, cur);
}

cout << ans;

    return 0;
}