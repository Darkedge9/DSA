#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    string str;
    cin >> str;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] != '4' && str[i] != '7') {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}
