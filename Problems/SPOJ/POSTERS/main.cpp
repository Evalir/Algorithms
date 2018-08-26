#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
using namespace std;

using ll = long long;
using pll = pair<ll,ll>;
using VI = vector<int>;
using VL = vector<ll>;
using VVI = vector<VI>;

struct SQRTDecomp {
    int NC,NR;
    vector<vector<int> > SQMat;
    vector<int> sumArr;
    vector<int> lazy;
    SQRTDecomp(vector<int> &V) {
        NC = 1000;
        while(V.size() % NC != 0) V.push_back((0));
        NR = (int)V.size() / NC;
        cerr << "NC : " << NC << endl;
        cerr << "NR : " << NR << endl;

        SQMat = vector<vector<int> > (NR, vector<int> (NC));
        sumArr = vector<int> (NR);
        lazy = vector<int> (NR + 5, 0);
        for(int i = 0; i < (int)V.size(); i++) {
            int row = i / NC;
            int col = i % NC;
            SQMat[row][col] = V[i];
            sumArr[row] += V[i];
        }
    }

    void applyLazy(int pos) {
        for (int i = 0; i < NC; i++)
            SQMat[pos][i] = lazy[pos];
        lazy[pos] = 0;
    }

    void update(ll l, ll r, ll delta) {
        int startRow = l/NC;
        int endRow = r/NC;
        int startCol = l % NC;
        int endCol = r % NC;
        applyLazy(startRow);
        applyLazy(endRow);
        if (startRow == endRow) {
            for(int i = startCol; i <= endCol; i++)
                SQMat[startRow][i] += delta;
            sumArr[startRow] += (delta*(r-l+1));
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

    int queryRange(int l, int r) {
        int ans = 0;
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
    int t;
    cin >> t;
    while(t--) {
        int q;
        cin >> q;
        while(q--) {
            int l, r;
            cin >> l >> r;
            l--,r--;
            //add to query
        }
        //get ans
    }

    return 0;
}