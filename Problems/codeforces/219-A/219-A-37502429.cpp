#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int k;
    cin >> k;
    string S;
    cin >> S;
    map<char, int> FREQ;
    for(int i = 0; i < S.size(); i++) {
        FREQ[S[i]]++;
    }
    
    //check if freq can be done.
    for(auto x : FREQ) { 
        if (x.second % k != 0) {
            cout << -1 << endl;
            return 0;
        }
        else 
            continue;
    }
    
    map<char, int> app;
    for(auto x : FREQ) {
        app[x.first] = x.second / k;
    }
    
    for(int i = 0; i < S.size(); i++) {
        for(auto x : app) {
            if (FREQ[x.first] != 0) {
                for(int j = 0; j < app[x.first]; j++) 
                    cout << x.first;
                FREQ[x.first] -= app[x.first];
            }
        } 
    }
    
    return 0;
    
}