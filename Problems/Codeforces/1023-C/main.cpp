#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

bool comp1(pair<char,int> f, pair<char,int> s) {return f.second < s.second;}

int main() {
    int a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    vector<pair<char,int>> anw;
    int cnt = 0;
    for(int i = 0; i < (int)s.size(); i++) {
        if (s[i] == '(' && cnt < b / 2) {
            anw.push_back({'(', i});
            cnt++;
        }
        if (cnt == b / 2)
            break;
    }
    int pt = 0;
    for(int i = 0; i < (int)s.size(); i++) {
        if (s[i] == ')' && i > anw[pt].second && cnt < b) {
            anw.push_back({')', i});
            pt++;
            cnt++;
        }
    }
    sort(anw.begin(), anw.end(), comp1);
    for(auto x : anw)
        cout << x.first;
    puts("");

    return 0;
}