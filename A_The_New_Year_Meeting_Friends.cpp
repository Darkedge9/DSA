#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int t1, t2, t3;
    cin >> t1>>t2>>t3;
     int mini = min({t1, t2, t3});
     t1 -= mini; 
     t2 -= mini; 
     t3 -= mini; 
     int maxi = max({t1, t2, t3});

     cout<<maxi;

    return 0;
}