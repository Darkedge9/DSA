#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    double n = log((double)b / a) / log(1.5);
    cout << (int)floor(n) + 1;
}
