#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long> a,b;
    for(int i = 0; i < n; i++) {
        int x; cin >> x;
        a.emplace_back(x);
        b.emplace_back(x);
    }
    sort(b.begin(), b.end());
    int mid = ((n)/2);
    
    cerr << mid << endl;
    for(int i = 0; i < n; i++) {
        if (i < mid)
            cout << b[mid-1] << endl;
        else
            cout << b[mid] << endl;
    }
    
    return 0;
}
