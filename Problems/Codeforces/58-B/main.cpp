#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s;
    int lz = 0;
    for(int i = n; i >= 1; i--) {
        if (i == n) {
            s.push_back(n);
            lz = i;
        }
        else {
            if (lz % i == 0) {
                s.push_back(i);
                lz = i;
            }
        }
    }
    for(auto &t : s)
        cout << t << ' ';
    puts("");
    return 0;
}