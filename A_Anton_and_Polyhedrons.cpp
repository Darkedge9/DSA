#include <bits/stdc++.h>
using namespace std;

// Tetrahedron. Tetrahedron has 4 triangular faces.
// Cube. Cube has 6 square faces.
// Octahedron. Octahedron has 8 triangular faces.
// Dodecahedron. Dodecahedron has 12 pentagonal faces.
// Icosahedron. Icosahedron has 20 triangular faces


#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

int main() {
    fastio

    int t;
    cin >> t;
    
    int res = 0;    
    while(t--) {
        string str;
        cin>>str;

        if(str == "Tetrahedron") res += 4;
        else if( str == "Cube") res +=6;
        else if( str == "Octahedron") res +=8;
        else if( str == "Dodecahedron") res +=12;
        else res+= 20;
    }

    cout<<res;

    return 0;
}