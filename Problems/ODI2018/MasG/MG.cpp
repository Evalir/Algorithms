#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;;

int main() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }
    vector<int> seq;
    
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        seq.push_back(x);
    }
    
    int ans = 0;
    while(seq.size() > 1) {
        if (seq[0] < seq[seq.size()-1]) {
            //cerr << "Pusing " << seq[seq.size()-1] << endl;
            ans += seq[seq.size()-1];
            seq[0] *= -1;
            seq.erase(seq.begin()+seq.size()-1);
        }
        else if (seq[0] >= seq[seq.size()-1]) {
           // cerr << "Pushing " << seq[0] << endl;
            ans += seq[0];
            seq[seq.size()-1] *= -1;
            seq.erase(seq.begin());
        }
    }
        
    cout << ans << endl;
        
    
}
