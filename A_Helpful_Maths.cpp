#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

   string str;
   cin>>str;
   vector<int>res;
   for(int i = 0; i< str.size(); i++){
    char ch = str[i];
    if(ch != '+') res.push_back(ch - '0');
   }
   sort(res.begin(), res.end());
   string newstr = to_string(res[0]);
   for(int i = 1; i< res.size(); i++){
    newstr +="+" + to_string(res[i]);
   }

   cout<<newstr;

    return 0;
}