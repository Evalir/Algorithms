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
using pll = pair<ll,ll>;
using VI = vector<int>;
using VL = vector<ll>;
using VVI = vector<VI>;
using namespace std;

struct SQRTDecomp {
    int NC,NR;
    vector<vector<ll> > SQMat;
    vector<ll> sumArr;
    vector<ll> lazy;
    SQRTDecomp(vector<ll> &V) {
        NC = 1000;
        while(V.size() % NC != 0) V.push_back((0));
        NR = (int)V.size() / NC;
        cerr << "NC : " << NC << endl;
        cerr << "NR : " << NR << endl;

        SQMat = vector<vector<ll> > (NR, vector<ll> (NC));
        sumArr = vector<ll> (NR);
        lazy = vector<ll> (NR + 5, 0);
        for(int i = 0; i < (int)V.size(); i++) {
            int row = i / NC;
            int col = i % NC;
            SQMat[row][col] = V[i];
            sumArr[row] += V[i];
        }
    }

    void applyLazy(int pos) {
        for (int i = 0; i < NC; i++)
            SQMat[pos][i] += lazy[pos];
        lazy[pos] = 0;
    }

    void update(int l, int r, ll delta) {
        int startRow = l/NC;
        int endRow = r/NC;
        int startCol = l % NC;
        int endCol = r % NC;
        applyLazy(startRow);
        applyLazy(endRow);
        if (startRow == endRow) {
            for(int i = startCol; i <= endCol; i++) {
                SQMat[startRow][i] += delta;
                sumArr[startRow] += delta;
            }
            return;
        }
        for(int i = startCol; i < NC; i++) {
            SQMat[startRow][i] += delta;
            sumArr[startRow] += delta;
        }
        for(int i = startRow+1; i < endRow; i++) {
            sumArr[i] += delta*NC;
            lazy[i] += delta;
        }
        for(int i = 0; i <= endCol; i++) {
            SQMat[endRow][i] += delta;
            sumArr[endRow] += delta;
        }
    }

    ll queryRange(int l, int r) {
        ll ans = 0;
        int startRow = l / NC;
        int endRow = r / NC;
        int startCol = l % NC;
        int endCol = r % NC;

        applyLazy(startRow);
        applyLazy(endRow);

        if (startRow == endRow) {
            for (int i = startCol; i <= endCol; i++)
                ans += SQMat[startRow][i];
            return ans;
        }

        for(int i = startCol; i < NC; i++) {
            ans += SQMat[startRow][i];
        }
        for(int i = startRow+1; i < endRow; i++) {
            ans += sumArr[i];
        }
        for(int i = 0; i <= endCol; i++) {
            ans += SQMat[endRow][i];
        }

        return ans;
    }
};

int main() {
    carlos joa
    int T;
    cin >> T;
    while(T--) {
        int n;
        cin >> n;
        VL V(n, 0);
        int q;
        cin >> q;
        SQRTDecomp D(V);
        while (q--) {
            int t;
            cin >> t;
            if (!t) {
                ll i,j,k;
                cin >> i >> j >> k;
                i--,j--;
                D.update(i,j,k);
            }
            else {
                ll i, j;
                cin >> i >> j;
                i--,j--;
                cout << D.queryRange(i, j) << endl;
            }
        }
    }
    return 0;
}