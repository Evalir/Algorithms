#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
#include <map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> s(n);
    for(int &t : s) cin >> t;
    int a = *min_element(s.begin(), s.end());
    int b = *max_element(s.begin(), s.end());
    if (abs(b-a) > k) {
        cout << "NO" << endl;
    }
    else {
        cout << "YES" << endl;
        for(auto &t : s) {
            for(int i = 0; i < t; i++) {
                cout << (i%k) + 1 << ' ';
            }
            cout << "\n";
        }
    }
    return 0;
}