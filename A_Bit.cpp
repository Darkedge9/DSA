#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int t;
    cin >> t;
    int x = 0;
    while(t--) {
        string str;
        cin>>str;
        if(str == "X++") x++;
        else if(str == "++X") ++x;
        else if(str == "X--") x--;
        else --x;
        
    }
    cout<<x;
    return 0;
}