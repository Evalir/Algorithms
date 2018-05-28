#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
    map<int, int> freq;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }
    
    if (freq[0] == 0) {
        cout << -1 << endl;
        return 0;
    }
    else if (freq[5] < 9) {
        cout << 0 << endl;
        return 0;
    }
    else if (freq[5] >= 9) {
        int max9 = freq[5]/9;
        for(int i = 0; i < 9*max9; i++) {
            cout << 5;
        }
        for(int i = 0; freq[0] > 0; i++) {
            cout << 0;
            freq[0]--;
        }
    }
    
    return 0;
    
}