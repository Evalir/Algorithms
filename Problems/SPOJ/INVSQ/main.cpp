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
using namespace std;

int countInversions(vector<ll> V) {
    int cnt = 0;
    for(int i = 0; i < V.size(); i++) {
        for(int j = i+1; j < V.size(); j++) {
            if (V[j] < V[i]) cnt++;
        }
    }
    return cnt;
}

struct SQRTDecomp {
    int NC,NR;
    vector<vector<ll> > SQMat;
    vector<ll> sumArr;
    vector<ll> lazy;
    SQRTDecomp(vector<ll> V) {
        NC = 1000;
        while(V.size() % NC != 0) V.push_back((0));
        NR = (int)V.size() / NC;
        //cerr << "NC : " << NC << endl;
        //cerr << "NR : " << NR << endl;

        SQMat = vector<vector<ll> > (NR, vector<ll> (NC));
        sumArr = vector<ll> (NR);
        lazy = vector<ll> (NR, 0);
        for(int i = 0; i < (int)V.size(); i++) {
            int row = i / NC;
            int col = i % NC;
            SQMat[row][col] = V[i];
            sumArr[row] += V[i];
        }
    }

    void currState() {
        cout << "----" << endl;
        for(int i = 0; i < NR; i++) {
            for(int j = 0; j < NC; j++) {
                cout << SQMat[i][j] << ' ';
            }
            cout << " SUM: " << sumArr[i] << endl;
        }
        cout << "----" << endl;
    }

    void applyLazy(int pos) {
        for (int i = 0; i < NC; i++)
            SQMat[pos][i] += lazy[pos];
        lazy[pos] = 0;
    }

    void update(int pos, int delta) {
        int row = pos / NC;
        int col = pos % NC;
        SQMat[row][col] += delta;
        sumArr[row] += delta;
    }

    ll queryRange(int l, int r, bool debug = false) {
        ll ans = 0;
        int startRow = l / NC;
        int endRow = r / NC;
        int startCol = l % NC;
        int endCol = r % NC;
        //applyLazy(startRow);
        //applyLazy(endRow);

        if (startRow == endRow) {
            for (int i = startCol; i <= endCol; i++) {
                ans += SQMat[startRow][i];
                if (debug) {
                    cout << "for " << l << " " << r << endl;
                    cout << "add startRow to ans (same row) " << startRow << ' ' << i << endl;
                }
            }
            return ans;
        }

        for(int i = startCol; i < NC; i++) {
            ans += SQMat[startRow][i];
            if (debug) {
                cout << "add startRow to ans " << startRow << ' ' << i << endl;
            }
        }
        for(int i = startRow+1; i < endRow; i++) {
            ans += sumArr[i];
            if (debug) {
                cout << "add sumArr to ans " << i << endl;
            }

        }
        for(int i = 0; i <= endCol; i++) {
            ans += SQMat[endRow][i];
            if (debug) {
                cout << "add endRow to ans " << endRow << ' ' << i << endl;
            }
        }

        return ans;
    }
};

struct LowCount {
    vector<ll> V;
    LowCount(const vector<ll> &v) {
        V = v;
        sort(V.begin(), V.end());
        V.erase(unique(V.begin(),V.end()),V.end());
    };
    ll query(ll n) {
        int Q = lower_bound(V.begin(),V.end(), n) - V.begin();
        return Q;
    }
};


int main() {
    carlos joa
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        vector<ll> s(n);
        vector<ll> z;
        for(ll &t : s) cin >> t;
        LowCount lc(s);
        for(ll &t : s) z.push_back(lc.query(t));
        cout << endl;
        ll maxel = *max_element(z.begin(), z.end());
        SQRTDecomp D(vector<ll>(maxel+2,0));
        ll inv = 0;
        for(ll &t : z) {
            if (t + 1 <= maxel) {
                inv += D.queryRange(t + 1, maxel);
            }
            D.update(t, 1);
        }
        cout << inv << endl;
    }

}