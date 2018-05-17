#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<long, int> FREQ;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        FREQ[x]++;
    }
    for(auto x : FREQ) {
        if (x.second % 2 == 0) {
            cout << "Unlucky" << endl;
            return 0;
        }
        else {
            cout << "Lucky" << endl;
            return 0;
        }
    }
    return 0;
}
