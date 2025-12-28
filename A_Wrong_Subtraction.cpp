#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int n,k;
    cin >> n>>k;
    while(k--) {
        if(n%10 == 0) n /=10;
        else {n--;}
    }

    cout<<n;

    return 0;
}