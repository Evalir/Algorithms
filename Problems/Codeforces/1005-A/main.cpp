#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n), z;
    for(int &t : s) cin >> t;
    for(int i = 0; i < n; i++) {
        if (i) {
            if (s[i-1] >= s[i]) z.push_back(s[i-1]);
        }
    }
    z.push_back(s[n-1]);
    cout << z.size() << endl;
    for(int &t : z) cout << t << ' ';
    puts("");
    return 0;
}