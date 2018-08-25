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
const int INF = -1*(1 << 30);
using ll = long long;
using pll = pair<ll,ll>;
using VI = vector<int>;
using VL = vector<ll>;
using VVI = vector<VI>;

struct SQRTDecomp {
    int NC,NR;
    vector<vector<ll> > SQMat;
    vector<vector<ll>> sumArr;
    vector<ll> lazy;
    SQRTDecomp(vector<ll> &V) {
        NC = 1000; //change acording to constraint
        while(V.size() % NC != 0) V.push_back((0)); //avoid division by 0
        NR = (int)V.size() / NC;
        cerr << "NC : " << NC << endl;
        cerr << "NR : " << NR << endl;

        SQMat = vector<vector<ll> > (NR, vector<ll> (NC));
        sumArr = vector<vector<ll> > (NR, vector<ll> (NC));
        //lazy = vector<ll> (NR + 5, 0);
        //modify sqrt decomposition creation if needed
        for(int i = 0; i < (int)V.size(); i++) {
            int row = i / NC;
            int col = i % NC;
            SQMat[row][col] = V[i];
            sumArr[row][col] = V[i];
        }
        for(int i = 0; i < NR; i++)
            sort(sumArr[i].begin(), sumArr[i].end());
    }
    //applies lazy update over a whole row, modify as needed (or delete)
    void applyLazy(int pos) {
        for (int i = 0; i < NC; i++)
            SQMat[pos][i] += lazy[pos];
        lazy[pos] = 0; //represents lazy update.
    }
    //updates elements in range by a delta
    void update(int pos, int num) {
        int Row = pos/NC;
        int Col = pos % NC;
        SQMat[Row][Col] = num;
        sumArr[Row] = SQMat[Row];
        sort(sumArr[Row].begin(), sumArr[Row].end());
    }
    //gets range sum
    ll queryRange(int l, int r, int num) {
        if (l > r)
            return -INF; //return -INF if query is not valid!
        ll ans = 0;
        int startRow = l / NC;
        int endRow = r / NC;
        int startCol = l % NC;
        int endCol = r % NC;
        //remove if not needed
        //applyLazy(startRow);
        //applyLazy(endRow);

        if (startRow == endRow) {
            for (int i = startCol; i <= endCol; i++) {
                if (SQMat[startRow][i] < num) {
                    ans++;
                }
            }
            return ans;
        }

        for(int i = startCol; i < NC; i++) {
            if (SQMat[startRow][i] < num) {
                ans++;
            }
        }
        for(int i = startRow+1; i < endRow; i++) {
            ans += lower_bound(sumArr[i].begin(), sumArr[i].end(), num) - sumArr[i].begin();
        }
        for(int i = 0; i <= endCol; i++) {
            if (SQMat[endRow][i] < num)
                ans++;
        }

        return ans;
    }
};

int main() {
    carlos joa
    int n;
    cin >> n;
    VL V(n);
    for(auto &i : V) cin >> i;
    int q;
    cin >> q;
    SQRTDecomp D(V);
    for(int i = 0; i < q; i++) {
        int l, r, x;
        cin >> l >> r >> x;
        l--,r--;
        cout << D.queryRange(l, r, x) << endl;
    }
    return 0;
}