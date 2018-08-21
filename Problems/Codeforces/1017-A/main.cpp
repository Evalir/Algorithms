#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <map>
#include <cmath>
#include <climits>
#include <numeric>
#define carlos ios_base::sync_with_stdio(false);
#define joa cin.tie(NULL);
#define endl '\n'
#define MOD 1000000007;
using namespace std;
using ll = long long;
using pll = pair<int,int>;
using VI = vector<int>;
using VL = vector<int>;
using VVI = vector<VI>;


bool comp1(pair<int,int> f, pair<int,int> s) {
    if (f.first != s.first) {
        return f.first > s.first;
    }
    return f.second < s.second;
}

int main() {
    carlos joa
    int n;
    cin >> n;
    vector<pair<int,int> > s(n);
    int id = 1;
    for(auto &t : s) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        t = {a+b+c+d, id};
        id++;
    }

    sort(s.begin(), s.end(), comp1);
    id = 1;
    for(auto &t : s) {
        if (t.second == 1) {
            cout << id << endl;
            return 0;
        }
        id++;
    }

    return 0;
}