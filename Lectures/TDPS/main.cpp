#include <bits/stdc++.h>
using namespace std;
using Long = long long;
vector<vector<Long>> PS(100, vector<Long>(100,0));
vector<vector<Long>> a(100, vector<Long>(100,0));

int main() {
    a = { { 1, 1, 1, 1, 1 },
           { 1, 1, 1, 1, 1 },
           { 1, 1, 1, 1, 1 },
           { 1, 1, 1, 1, 1 }
         };
    int r = 4, c = 5;
    for(int i = 1; i <= r; i++) {
        for(int j = 1; j <= c; j++) {
            PS[i][j] = PS[i - 1][j] + PS[i][j - 1] - PS[i - 1][j - 1] + a[i - 1][j - 1];
            //Formula: rectangle at i - 1 + rectangle at j - 1 - intersection of both + single element at leftmost corner
        }
    }
    for(int i = 0; i <= r; i++) {
        for(int j = 0; j <= c; j++) {
            cout << PS[i][j] << ' ';
        }
        cout << endl;
    }
    //sum from (2,2) to (3,3)
    Long sum = PS[3][3] - PS[1][3] - PS[3][1] + PS[1][1];
    //Formula: rectangle ending at (xn,yn) - rectangle at (x0-1,yn) - rectangle at (xn,y0 - 1) + rectangle at (x0 - 1, y0 - 1)
    cout << sum << endl;

    return 0;
}