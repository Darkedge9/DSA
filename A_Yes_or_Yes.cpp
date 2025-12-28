#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int t;
    cin >> t;
    while(t--) {
        string str;
        cin>>str;
        int size = str.length();
        int cnt = 0;
        for (int i = 0; i < size; i++)
        {
            char ch = str[i];
            if(ch == 'Y') cnt++;
        }

        if(cnt >=2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

        

    }

    return 0;
}