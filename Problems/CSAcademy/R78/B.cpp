#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <set>
#include <map>
#include <queue>
#define EPS (int)-1e9
using namespace std;

int main() {
    vector<long> points;
    int n;
    cin >> n;
    long maxdif = -1;
    long md2 = 0;
    long tx = 0;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        points.push_back(x);
        if (i != 0 && abs(points[i]-points[i-1]) >= maxdif) {
            maxdif = max(maxdif, abs(points[i]-points[i-1]));
            tx = i;
        }
    }
    //cerr << points[tx] << endl; 
    points[tx] = -EPS;
    long x1,x2;
    for(int i = 0; i < n; i++) {
        if (i != 0 && abs(points[i]-points[i-1]) < maxdif && abs(points[i]-points[i-1]) > md2) {
            md2 = max(md2, abs(points[i]-points[i-1]));
            x1 = points[i-1];
            x2 = points[i];
        }
    }
    //cerr << maxdif << ' ' << md2 << endl;
    if (md2 == 1) {
        cout << 1 << endl;
        return 0;
    }
    if (md2 == 0) {
        cout << 0 << endl;
        return 0;
    }
    
    //cerr << x1 << ' ' << x2 << endl;
    long midpoint = (x1+x2)/2;
    long ans =0;
    points.push_back(midpoint);
    sort(points.begin(), points.end());
    for(int i = 0; i < n; i++) {
        if (i != 0) {
            if (points[i] == EPS || points[i-1] == EPS)
                continue;
            ans = max(ans, abs(points[i]-points[i-1]));
        }
    }
    
    
    cout << ans << endl;
    return 0;
}
