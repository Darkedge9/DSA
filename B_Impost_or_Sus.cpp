// #include <bits/stdc++.h>
// using namespace std;

// #define fastio ios::sync_with_stdio(false); cin.tie(NULL);

// bool countS(string s){
//     int cnt = 0;
//     for(char ch : s){
//         if(ch == 's') cnt++;
//         if(cnt >= 2) return true;
//     }
//     return false;
// }

// bool checkU(string s){
//     int size = s.length();

//     if(s[0] == 'u' || s[size - 1] == 'u') return false;

//     for(int i = 1; i < size - 1; i++){
//         if(s[i] == 'u'){
//             int left = -1, right = -1;

//             for(int j = i - 1; j >= 0; j--){
//                 if(s[j] == 's'){
//                     left = j;
//                     break;
//                 }
//             }

//             for(int j = i + 1; j < size; j++){
//                 if(s[j] == 's'){
//                     right = j;
//                     break;
//                 }
//             }

//             if(left == -1 || right == -1) return false;
//             if((i - left) != (right - i)) return false;
//         }
//     }
//     return true;
// }

// int main() {
//     fastio

//     int t;
//     cin >> t;
//     while(t--) {
//         string str;
//         cin >> str;

//         if(countS(str) && checkU(str))
//             cout << 0 << endl;
//         else
//             cout << -1 << endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

bool countS(string &s){
    int cnt = 0;
    for(char c : s){
        if(c == 's') cnt++;
        if(cnt >= 2) return true;
    }
    return false;
}

int main() {
    fastio

    int t;
    cin >> t;
    while(t--) {
        string str;
        cin >> str;
        int n = str.size();

        // Assertion
        for(char c : str){
            assert(c == 's' || c == 'u');
        }

        int ops = 0;

        // Step 2: first character must be 's'
        if(str[0] == 'u'){
            str[0] = 's';
            ops++;
        }

        // Step 2: last character must be 's'
        if(str[n - 1] == 'u'){
            str[n - 1] = 's';
            ops++;
        }

        // Step 3: pointer traversal between first and last
        int last_s = 0;     // index of last seen 's'
        bool used_u = false; // whether a 'u' is already placed between two 's'

        for(int i = 1; i < n; i++){
            if(str[i] == 's'){
                // reset for new segment
                last_s = i;
                used_u = false;
            }
            else { // str[i] == 'u'
                if(!used_u){
                    // tentatively allow one 'u'
                    used_u = true;
                }
                else{
                    // second 'u' in the same segment → must convert
                    str[i] = 's';
                    ops++;
                    last_s = i;
                    used_u = false;
                }
            }
        }

        // Step 4: result
        cout << ops << endl;
    }

    return 0;
}
