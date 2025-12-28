#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        string str = to_string(n);
        int noOfDigits = str.length();
        int val = (str[0] - '0') - 1;
        int num = val*10;
        int currval = noOfDigits*(noOfDigits +1)/2;
        int res = num + currval;
        cout<<res<<endl;
    }

    return 0;
}