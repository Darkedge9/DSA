#include<bits/stdc++.h>
using namespace std;


const int N = 1000000 + 4256;
int t[N];

int solve(int n){

    if(n == 0) return 1;
    if(n == 1) return 0;
    
    t[n] = 2*solve(n-2);
    return t[n];
}
int main(){
    int n; 
    cin>> n;
    cout<<solve(n);

    return 0;
}