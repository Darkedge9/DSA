#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int t;
    cin >> t;
    vector<int>res(t);
    for(int i = 0 ; i< t; i++){
        cin>>res[i];
    }

    sort(res.begin(), res.end());

    if(res[t-1] == 1) cout<<"HARD";
    else cout<<"EASY";
    return 0;
}