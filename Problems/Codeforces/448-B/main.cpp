#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    bool at = false, ar = false, tr = false;
    int pt = 0;
    for(auto c : s) {
        if (pt == t.size())
            break;
        if (c == t[pt])
            pt++;
    }
    if (pt != t.size())
        ar = true;
    map<char,int> fr1, fr2;
    for(auto c : s)
        fr1[c]++;
    for(auto c : t)
        fr2[c]++;
    for(auto c: t) {
        if (fr1[c] < fr2[c]) {
            tr = true;
        }
        if (fr1[c] > fr2[c]) {
            at = true;
        }
    }
    for(auto c : s) {
        if (fr2[c] < 1)
            at = true;
    }
    cerr << at << ar << tr << endl;
    if (at && !ar && !tr)
        cout << "automaton" << endl;
    else if (!at && ar && !tr)
        cout << "array" << endl;
    else if (at && ar && !tr)
        cout << "both" << endl;
    else if (tr)
        cout << "need tree" << endl;

    return 0;
}