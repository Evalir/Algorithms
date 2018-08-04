#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
vector<int> s;
int main() {
    int n;
    cin >> n;
    int k;
    for(int i = 2; i <= n; i += 2) {
        s.push_back(i);
    }
    for(int i = 1; i <= n; i += 2) {
        s.push_back(i);
    }
    for(int i = 0; i < (int)s.size(); i++) {
        if (i) {
            if (abs(s[i-1] - s[i]) == 1) {
                cout << "NO SOLUTION" << endl;
                return 0;
            }
            else continue;
        }
    }
    for(int t : s)
        cout << t << ' ';
    return 0;
}