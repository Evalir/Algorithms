#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    k--;
    vector<int> el(n, 0);
    map<int, int> freq;
    for(int i = 0; i < n; i++) {
        cin >> el[i];
        freq[el[i]]++;
    }
    
    if (freq.size() > 2) {
        cout << -1 << endl;
        return 0;
    }
    if (freq.size() == 1) {
        cout << 0 << endl;
        return 0;
    }
    int maxf = 0;
    int minf = (int)1e9;
    for(auto x : freq) {maxf = max(maxf, x.second);minf = min(minf, x.second);}
    
    if (maxf == minf && maxf == 1) {
        cout << -1 << endl;
        return 0;
    }
    if (maxf == minf) {
        cout << k << endl;
        return 0;
    }
    if (freq[el[k]] == maxf) {
        int dix = 0;
        //check if diff element is after k index
        for(int i = 0; i < n; i++) {
            if (freq[el[i]] != maxf && i >= k) {
                cout << -1 << endl;
                return 0;
            }
            else if (freq[el[i]] != maxf && i < k) {
                dix = i;
                break;
            }
        }
        
        cout << dix+1 << endl;
        return 0;
    }
    
    cout << -1 << endl;
    return 0;
}
