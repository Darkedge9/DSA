#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        if (i == 0 && ch == '9') continue;
        else {
            int n = ch - '0';
            if (n >= 5) {
                str[i] = (9 - n) + '0';
            }
        }
    }

    cout << str;
    return 0;
}
