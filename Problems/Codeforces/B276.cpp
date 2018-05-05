#include <string>
#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

map<char, int> FREQ;
    
bool checkPalindrome(string& S) {
    int n = S.size();
    bool inp = 1;
    for(int i = 0; i < n/2;i++) {
        if (S[i] != S[n-1-i])
            inp = 0;
    }
    if (inp)
        return true;
    for(int i = 0; i < S.size(); i++)
        FREQ[S[i]]++;
        
    int nof = 0;
    for(auto x : FREQ) {
        if (x.second % 2 != 0) {
            cerr << x.first << ' ' << x.second << endl;
            nof++;
        }
    }
    if (nof > 1)
        return false;
    
    return true;
}

int main() {
    string S;
    cin >> S;
    bool ip = checkPalindrome(S);
    cerr << ip << endl;
    if (S.size() % 2 != 0 || ip) {
        cout << "First" << endl;
    }
    else if (S.size() % 2 == 0){
        cout << "Second" << endl;
    }
    
    return 0;
    
}
