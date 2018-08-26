#include <bits/stdc++.h>
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
        NC = 4;
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
            sumArr[row] = max(sumArr[row], V[i]);
        }
    }
    void print() {
        for(int i = 0; i <= 0; i++) {
            for(int j = 0; j < 10; j++)
                cout << SQMat[i][j] << ' ';
            cout << endl;
        }
    
    }
    void applyLazy(int pos) {
        for (int i = 0; i < NC; i++)
            SQMat[pos][i] = lazy[pos];
        lazy[pos] = 0;
    }
    
    void update(int pos, int delta) {
        int rowPos = pos/NC;
        int colPos = pos % NC;
        SQMat[rowPos][colPos] = delta;
        sumArr[rowPos] = *max_element(SQMat[rowPos].begin(), SQMat[rowPos].end());
        
    }
    
    int queryRange(int l, int r) {
        int ans = 0;
        int startRow = l / NC;
        int endRow = r / NC;
        int startCol = l % NC;
        int endCol = r % NC;
        if (l > r)
            return -1;
        if (startRow == endRow) {
            for (int i = startCol; i <= endCol; i++) {
                ans = max(ans, SQMat[startRow][i]);
            }
            return ans;
        }
        
        for(int i = startCol; i < NC; i++) {
            ans = max(ans, SQMat[startRow][i]);
        }
        for(int i = startRow+1; i < endRow; i++) {
            ans = max(ans, sumArr[i]);
        }
        for(int i = 0; i <= endCol; i++) {
            ans = max(ans, SQMat[endRow][i]);
        }
        
        return ans;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int &t : s) cin >> t;
    vector<int> arr(25,0);
    
    SQRTDecomp D(arr);
    int LIS = 0;
    for(int i = 0; i < (int)s.size(); i++) {
        int q = D.queryRange(0, s[i]-1);
        int lisfor = q + 1;
        LIS = max(LIS, lisfor);
        D.update(s[i], lisfor);
    }
    cout << LIS << endl;
    return 0;
}
