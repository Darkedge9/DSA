#include <bits/stdc++.h>
using namespace std;

#define fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);

int main()
{
    fastio

    vector<vector<int>>input(5, vector<int>(5));
    int row = 0, col = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> input[i][j];
            if (input[i][j] == 1)
            {
                row = i+1;
                col = j+1;
            }
        }
        cout << endl;
    }
    
    cout<<abs(3-row)+ abs(3-col);

    return 0;
}