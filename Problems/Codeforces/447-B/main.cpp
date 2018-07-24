#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;
using ll = long long;
int main() {
    string s;
    cin >> s;
    int k;
    cin >> k;
    vector<int> v(26);
    for(int &i : v)
        cin >> i;
    pair<char,int> bc = {'a',v[0]};
    for(int i = 0; i < (int)v.size(); i++) {
        if (bc.second < v[i]) {
            bc.first = i+'a';
            bc.second = v[i];
        }
    }
    while(k--)
        s += bc.first;
    ll ans = 0;
    for(int i = 0; i < (int)s.size(); i++) {
        ans += (i+1)*v[s[i]-'a'];
    }
    cout << ans;
    return 0;
}