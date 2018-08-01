#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <map>
#include <cmath>
#include <climits>
#include <numeric>
#define MOD 1000000007;
using namespace std;

using ll = long long;
using pll = pair<ll,ll>;
using VI = vector<int>;
using VL = vector<ll>;
using VVI = vector<VI>;

int N;
struct Query {
    int id, x;
    pair<int,int> r;
    Query (int _id, int _x, pair<int,int> _r) {
        id = _id;
        x = _x;
        r = _r;
    }
    bool operator<(Query o) const {
        return  x < o.x;
    }
};

struct FenwickTree {

    vector<int> tri;
    FenwickTree(int N) : tri(N+10, 0) {}
    void add(int x, int d) {
        for (int i = x + 1; i < tri.size(); i += i&(-i)) {
            tri[i] += d;
            cout << i << " :add : " << tri[i] << endl;
        }
    }

    int sum(int x) {
        int ans = 0;
        for (int i = x + 1; i > 0; i -= i&(-i)) {
            ans += tri[i];
            //cout << i << " get: " << tri[i] << endl;
        }
        return ans;
    }

    void pr() {
        for(int i = 0; i < (int)tri.size(); i++)
            cout << tri[i] << ' ';
        cout << endl;
    }
};


int main() {
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    scanf("%d", &N);
    vector<pair<int,int> > V(N);
    for(int i = 0; i < N; ++i) {
        scanf("%d", &V[i].first);
        V[i].second = i + 1;
    }
    sort(V.rbegin(), V.rend());
    cout << endl << endl;
    for(int i = 0; i < N; i++) {
        cout << V[i].first << " -> " << V[i].second << endl;
    }
    queue<pair<int,int> > Q;
    for(auto &p : V) Q.push(p);
    int qx;
    scanf("%d", &qx);
    FenwickTree FT(N);
    vector<Query> St;
    ll ANS[200010];

    for(int i = 0; i < qx; i++) {
        pair<int,int> k;
        int z;
        scanf("%d %d %d", &k.first, &k.second, &z);
        Query q = {i,z,k};
        St.push_back(q);
    }
    sort(St.rbegin(), St.rend());
    for(auto t : St) cout << t.x << " id -> " << t.id << endl;
    for (Query q : St) {
        while(Q.size() && Q.front().first > q.x) {
            cout << "processing query " << q.id << endl;
            FT.add(Q.front().second, 1);
            FT.pr();
            Q.pop();
        }
        //cerr << "ans for range " << q.r.first << ' ' << q.r.second << " " << " : " << FT.sum(q.r.second)- FT.sum(q.r.first) << endl;
        ANS[q.id] = FT.sum(q.r.second) - FT.sum(q.r.first-1);

    }
    for(int i = 0; i < qx; i++)
        printf("%ld\n", ANS[i]);

    return 0;
}