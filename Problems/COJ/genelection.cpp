#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        int votes[n];
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                int x;
                cin >> x;
                votes[j] += x;
            }
        }
        
        int maxs = 0;
        int winner = 0;
        for(int i = 0; i < n; i++) {
            if(max(maxs, votes[i]) == votes[i]) {
                maxs = max(maxs, votes[i]);
                cerr << maxs << " for candidate " << i << endl;
                winner = i;
            }
        }
        
        cout << winner+1 << endl;
    }
    
    return 0;

}
