#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

class MinimizeAbsoluteDifferenceDiv2 {
public:
    vector<int> findTriple(int a, int b, int c) {
        vector<int> el = {a,b,c};
        vector<int> elp = {a,b,c};
        vector<int> pos = {0,1,2};
        vector<int> ans(3,0);
        sort(el.begin(), el.end());
        int minans = 1000000;
        while(next_permutation(el.begin(), el.end())) {
            int currans = abs(el[0]/el[1] - el[2]);
            minans = min(minans, currans);
        }
        
        while(next_permutation(pos.begin(), pos.end())) {
            if (elp[pos[0]]/elp[pos[1]] - elp[pos[2]] == minans) {
                cerr << pos[0] << ' ' << pos[1] << ' ' << pos[2] << endl;
                ans[0] = pos[0];
                ans[1] = pos[1];
                ans[2] = pos[2];
                break;
            }
            else
                continue;
        }
        
        return ans;
    }
    
    
    
    
    
};

int main() {
    MinimizeAbsoluteDifferenceDiv2 a;
    vector<int> ans = a.findTriple(10, 11, 11);
    cout << ans[0] << ' ' << ans[1] << ' ' << ans[2] << endl;
    return 0;
    
}
