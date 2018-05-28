#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> houses;

    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        houses.push_back(x);
    }
    
    int bestdist = 100000000;
    for(int i = 0; i < n; i++) {
        if (houses[i] != 0 && houses[i] <= k && i != m-1) {
            bestdist = min(bestdist, abs((m-1-i)*10));
        }
        else continue;
    }

    cout << bestdist << endl;
    return 0;
}