#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int t;
    cin >> t;

    while (t--) {
        int a, b, n;
        cin >> a >> b >> n;

        int cnt = 0;
        while (a <= n && b <= n) {
            if (a < b)
                a += b;
            else
                b += a;
            cnt++;
        }

        cout << cnt << '\n';
    }

    return 0;
}
