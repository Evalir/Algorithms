#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

using Long = long long;
int main() {
    int t;
    cin >> t;
    while(t--) {
        Long n,r;
        cin >> n >> r;
        Long x = 0;
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            x += a;
        }
        if ((x+1500LL) == r) {
            cout << "Correct" << endl;
        }
        else {
            cout << "Bug" << endl;
        }
    }
    return 0;
}