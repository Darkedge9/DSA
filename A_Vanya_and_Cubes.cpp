#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int t;
    cin >> t;
    int n =1 ;
    while(true){
        int val = n*(n+1)/2;
        if(t < val) break;
        t -= val;
        n++;
    }

    cout<<n-1;

    return 0;
}