#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(auto &t : s) cin >> t;
    for(int i = 0; i < n; i++) {
        int cnt = 0;
        for(int j = 0; j < n; j++) {
            if ( i!= j && s[i] < s[j]) cnt++;
        }
        cout << 1 + cnt << ' ';
    }
    puts("");
    return 0;
}