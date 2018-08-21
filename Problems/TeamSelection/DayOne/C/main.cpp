#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    string S;
    cin >> S;
    string ns;
    vector<pair<char,int> >t;
    int cnt = 1;
    for(int i = 0; i < S.size(); i++) {
        if (i) {
            if (S[i-1] == S[i]) {
                cnt++;
            }
            else {
                cerr << "change at " << S[i] << endl;
                t.push_back({S[i-1], cnt});
                cnt = 1;
            }
        }
    }

    t.push_back({S[S.size()-1], cnt});

    for(auto a : t) {
        cout << char(a.first) << a.second;
    }
    puts("");

    return 0;
}