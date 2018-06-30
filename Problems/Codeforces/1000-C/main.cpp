#include <iostream>
#include <vector>
#include <map>
using namespace std;

using ll = long long;

int main() {
    int n;
    cin >> n;
    vector<pair<ll,ll>> V;
    map<ll,int> anw;
    map<int,vector<ll> > S;
    int ans = 0;
    for(int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        ++r;
        V.push_back({l,r});
    }
    for(int i = 0; i < n; i++) {
        cerr << V[i].first << ' ' << V[i].second << endl;
        S[V[i].first].push_back(1);
        S[V[i].second].push_back(2);
    }
    int ps = 0;
    ll ls = -1;
    pair<ll, vector<ll>> k;
    for(auto i : S) {
        k = i;
        for(auto j : i.second) {
            if (j == 1) {
                if (ls == -1)
                    ls = i.first;
                else {
                    anw[ps] += ((i.first-1) - ls);
                    cerr << "at " << ps << ' ' <<  anw[ps] << endl;
                    ls = i.first;
                }
                ++ps;
            }
            if (j == 2) {
                anw[ps] += ((i.first-1) - ls);
                cerr << "at 2 " << ps << ' ' << anw[ps] << endl;
                --ps;
            }
        }

        cerr << "ps is " << ps << endl;
        cerr << "ls is " << ls << endl;
    }
    for(auto i : k.second) {
        if (i == 1) {
            if (ls == -1)
                ls = k.first;
            else {
                anw[ps] += ((i -1) - ls);
                cerr << "at " << ps << ' ' <<  anw[ps] << endl;
                ls = k.first;
            }
            ++ps;
        }
        if (i == 2) {
            anw[ps] += ((i-1) - ls);
            cerr << "at 2 " << ps << ' ' << anw[ps] << endl;
            --ps;
        }
    }

    for(auto i : anw) {
        cout << i.first << ' ' << i.second << endl;
    }
    return 0;
}