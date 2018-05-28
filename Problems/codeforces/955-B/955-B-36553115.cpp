#include <iostream>
#include <cstdio>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    string S;
    cin >> S;
    map<char, int> M;
    int lowfr = 1e9;
    int one = 0;
    for(int i = 0; i < S.length(); i++) {
        M[S[i]]++;
    }
    
    for(auto i : M) {
        lowfr = min(lowfr, i.second);
        if (i.second == 1)
            one++;
    }
    
    if (M.size() < 2) {
        //cout << 1;
        cout << "No" << endl;
        return 0;
    }
    else {
        if (M.size() == 2 && lowfr == 1) {
           // cout << 2;
            cout << "No" << endl;
            return 0;
        }
        if (M.size() == 3 && one >= 3) {
           // cout << 3;
            cout << "No" << endl;
            return 0;
        }
        if (M.size() > 4){
          //  cout << 4;
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
    return 0;
    
    
    
    
}