#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
using namespace std;
using ll = long long;
char gr[110][110];
int main() {
    int T;
    cin >> T;
    while(T--) {
        int r,c,i;
        cin >> r >> c >> i;
        memset(gr,'.', sizeof(gr));
        while(i--) {
            int r1,c1,r2,c2;
            char color;
            cin >> r1 >> c1 >> r2 >> c2 >> color;
            for(int a = r1; a <= r2; a++) {
                for(int b = c1; b <= c2; b++) {
                    gr[a][b] = color;
                }
            }
        }
        for(int a = 1; a <= r; a++) {
            for(int b = 1; b <= c; b++) {
                cout << gr[a][b];
            }
            cout << '\n';
        }
    }
    return 0;
}