#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

 string str;
 cin>>str;
 set<char>res;
 for(auto it: str){
    res.insert(it);
 }

 if(res.size() % 2 == 0) cout<<"CHAT WITH HER!";
 else cout<<"IGNORE HIM!";

    return 0;
}