#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    bool tg[101];
    for(int i = 0;  i < 101; i++)
        tg[i] = 0;
    for(int i = 0; i < m; i++) {
        int x;
        cin >> x;
        tg[x] = 1;
    }
    int cnt = 0, ans = (int)1e9;
    for(int i = x; i > 0; i--) {
        if (tg[i])
            cnt++;
    }
    ans = min(ans, cnt);
    //cerr << cnt << " is" << endl;
    cnt = 0;
    for(int i = x; i <= n; i++) {
        if (tg[i])
            cnt++;
            //cerr << "sq on " << i << ' ' << tg[i] << endl;
    }
    ans = min(ans, cnt);
    //cerr << cnt << " is" << endl;
    cout << ans << endl;
    return 0;
    
}
