#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> time(7,0);
    for(int i = 0; i < 7; i++)
        cin >> time[i];
        
    int ans = 0;
    int pl = n;
    bool fs = 0;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 7; j++) {
            ans = j;
            pl -= time[j];
            cerr << "pleft " << pl << endl;
            if (pl <= 0) {
                fs = 1;
                break;
            }
        }
        if (fs)
            break;
    }
        
    cout << ans+1 << endl;
    return 0;
    
}