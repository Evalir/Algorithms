#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;
    map<int,int> fr;
    for(auto &t : s)
        if (t == '4' || t == '7')
            fr[t-'0']++;
    if (fr[4] != 0 || fr[7] != 0) {
        if (fr[4] >= fr[7])
            cout << 4 << endl;
        else if (fr[4] < fr[7])
            cout << 7 << endl;
    }
    else
        cout << -1 << endl;

    return 0;
}