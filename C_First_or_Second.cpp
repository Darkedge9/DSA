// #include <bits/stdc++.h>
// using namespace std;

// #define fastio                   \
//     ios::sync_with_stdio(false); \
//     cin.tie(NULL);

// int main()
// {
//     fastio

//         int t;
//     cin >> t;
//     while (t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> children(n);
//         for (int i = 0; i < n; i++)
//         {
//             cin >> children[i];
//         }
//         int k = 0;
//         while(children.size() != 1)
//         {   
//             // int i = 0;
//             int first = children[0];
//             int second = children[1];

//             if (first >= (-1) * (second))
//             {
//                 k += first;
//                 children.erase(children.begin() + 0);

//             }
//             else{
//                 k -= second;
//                 children.erase(children.begin()+1);
//             }
//         }

//         cout<<k<<endl;
//     }

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio;

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Suffix sum: suff[i] = a[i] + ... + a[n-1]
        vector<long long> suff(n + 1, 0);
        for (int i = n - 1; i >= 0; i--) {
            suff[i] = suff[i + 1] + a[i];
        }

        long long prefix = 0;
        long long ans = LLONG_MIN;

        for (int k = 0; k < n; k++) {
            // X = prefix - sum of right side
            long long X = prefix - suff[k + 1];
            ans = max(ans, X);

            // Update prefix for next k
            if (k == 0)
                prefix += a[0];
            else
                prefix += llabs(a[k]);
        }

        cout << ans << "\n";
    }

    return 0;
}
