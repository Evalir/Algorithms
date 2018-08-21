#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
using namespace std;

int gr[120][120];
int main() {
    int t;
    cin >> t;
    while(t--) {
        memset(gr,0,sizeof(gr));
        int n;
        cin >> n;
        while(n--) {
            int a,b,c;
            cin >> a >> b >> c;
            for(int i = a; i < b; i++) {
                for(int j = 0; j < c; j++) {
                    gr[i][j] = 1;
                }
            }
        }
        int ans = 0;
        for(int i = 0; i <= 100; i++) {
            for(int j = 0; j <= 100; j++) {
                if (gr[i][j])
                    ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}