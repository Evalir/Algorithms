#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    long long t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    string road;
    cin >> road;
    long ans = 0;
    for(int i = 0; i < road.size(); i++) {
        if (road[i] == 'S' && abs((sy-1)-ey) < abs(sy-ey)) {
            sy--;
        }
        if (road[i] == 'N' && abs((sy+1)-ey) < abs(sy-ey)) {
            sy++;

        }
        if (road[i] == 'E' && abs((sx+1)-ex) < abs((sx-ex))) {
            sx++;

        }
        if (road[i] == 'W' && abs((sx-1)-ex) < abs((sx-ex))) {
            sx--;
        }
        ans++;
        if (sx==ex && sy == ey) {
            cout << ans << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}