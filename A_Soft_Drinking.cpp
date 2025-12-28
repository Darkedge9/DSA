    #include <bits/stdc++.h>
    using namespace std;

    #define fastio ios::sync_with_stdio(false); cin.tie(NULL);

    int main() {
        fastio

        int n, k, l, c, d, p, nl, np;
        cin >> n >> k >> l >> c >> d >> p >> nl >> np;

        int totalDrink = k * l;        
    int toastsByDrink = totalDrink / nl;
    int toastsByLime = c * d;
    int toastsBySalt = p / np;

    cout << min({toastsByDrink, toastsByLime, toastsBySalt}) / n;


        return 0;
    }