#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;
using pic = pair<int,char>;

bool comp1(pic a, pic b) {
    if (a.first != b.first)
        return a.first < b.first;
    return a.second < b.second;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<pic> s(m);
    int i = 0;
    bool ok = true;
    while(m--) {
        pic x;
        cin >> x.first >> x.second;
        if (x.second == 'M') {
            ok = false;
            continue;
        }
        s[i] = x;
        i++;
    }
    sort(s.begin(), s.end(), comp1);
    for(int i = 0; i < (int)s.size()-1; i++) {
        if (abs(s[i].first - s[i+1].first) < 4 && s[i].second != s[i+1].second)
            ok = false;
    }
    if (ok)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}