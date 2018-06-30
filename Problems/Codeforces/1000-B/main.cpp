#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> P(n);
    for(int& i : P)
        cin >> i;
    bool ok = true;
    int ans = 0;
    for(int i = 0; i < P.size(); i++) {
        if (!(i&1)) {
            if (i == 0) {
                ans += P[i];
                cerr << "here " << ans << endl;
            }
            else {
                cerr << "here " << P[i]-P[i-1] << endl;
                ans += P[i] - P[i - 1];
            }
            ok = false;
        }
        else if (i&1){
            cerr << "not ok " << i << endl;
            ok = true;
        }
        if ((i == P.size()-1) && !(i & 1)) {
            ans += k - P[i];
        }
    }

    cout << ans << endl;
    return 0;
}