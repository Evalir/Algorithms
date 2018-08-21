#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstring>
using namespace std;
int arr[110][110];
int main() {
    int n,m,d;
    cin >> n >> m >> d;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> arr[i][j];
    int curmod = arr[0][0] % d;
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++)
            if (arr[i][j] % d != curmod) {
                puts("-1");
                return 0;
            }
    }
    int ans = (int)1e9;
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++) {
            int cnt = 0;
            for (int l = 0; l < n; l++)
                for(int r = 0; r < m; r++)
                    cnt += (abs(arr[i][j]-arr[l][r])/d);
            ans = min(ans, cnt);
        }
    cout << ans << "\n";
    return 0;
}