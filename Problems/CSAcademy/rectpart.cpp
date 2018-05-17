#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int h, w, n, m;
    cin >> h >> w >> n >> m;
    vector<int> yh;
    vector<int> xv;
    map<int, int> A, B;
    
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        yh.push_back(x);
    }
        
    for(int i = 0; i < m; i++) {
        int x;
        cin >> x;
        xv.push_back(x);
    }
    
    sort(yh.begin(), yh.end());
    sort(xv.begin(), xv.end());
    //get distances
    for(int i = 0; i < n; i++) {
        if (i == 0) {
            A[abs(yh[i])]++;
            cerr << "DIST1A: " << abs(yh[i]) << endl;
        }
        else if (i == n-1 && m != 1) {
            A[abs(yh[i])-h]++;
            A[abs(yh[i])-yh[i-1]]++;
            cerr << "DIST2A: " << abs(abs(yh[i])-h) << endl;
        }
        else {
            A[abs(yh[i])-yh[i-1]]++;
            cerr << "DIST3A: " << abs(yh[i])-yh[i-1] << endl;   
        }
    }   
    for(int i = 0; i < m; i++) {
        if (i == 0) {
            B[abs(xv[i])]++;
            cerr << "DIST2B: " << abs(xv[i]) << endl;
        }
        else if (i == m-1 && m != 1) {
            B[abs(xv[i])-w]++;
            B[abs(xv[i])-xv[i-1]]++;
            cerr << "DIST2B: " << abs(xv[i]-w) << endl;
        }
        else {
            B[abs(xv[i])-xv[i-1]]++;
            cerr << "DIST2B: " << abs(xv[i]-xv[i-1]) << endl;
        }
    }
    int ans = 0;
    for(int i = 0; i < 1e5-1; i++) {
        ans += A[i] * B[i];
    }
    
    cout << ans*2 << endl;
    
    return 0;
}