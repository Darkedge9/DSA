#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int t;
    cin >> t;
    vector<int>height(t);
    for (int i = 0; i < t; i++)
    {
        cin>>height[i];
    }
    

    int minidx = 0;
    int maxidx = t-1;
    for(int i = 0; i< t; i++){
        if(height[i] <= height[minidx]){
            minidx = i;
        }
        
        
    }
    for(int i = (t-1); i>=0 ; i--){
    if(height[i] >= height[maxidx]){
            maxidx = i;
        }    
        
    }
    int ans = 0;
    if(minidx  > maxidx){
        ans = maxidx + (t - minidx-1);
    }
    else{
        ans = maxidx + (t - minidx - 1) - 1;
    }

    cout<<ans;
    return 0;
}