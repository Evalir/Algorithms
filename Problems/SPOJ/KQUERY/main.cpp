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
#define joa = ios_base::sync_with_stdio(false);
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
    // sq-root decomposed vector into blocks of size sqrt-n
    vector<vector<ll> > SQMat;
    //contains block sum for each row
    vector<vector<ll> > sumArr;
    SQRTDecomp(vector<ll> V) {
        // V.size() has exact SQRT
        // divide blocks into sizes of SQRT(n)
        //blockN = sqrt(V.size()); // we use round just to avoid incredibly minimal errors such as sqrt(100) = 9.9999999999999, it may be downcasted to 9 incorrectly when exact sqrt is 10 :)
        NC = sqrt(V.size());
        NR = V.size() / NC + 1;
        //cerr << blockN << endl;
        // This is how to build the blocks, sqrtN vectors of size sqrt N.
        // N total, blockN^2
        SQMat = vector<vector<ll> > (NR, vector<ll> (NC));
        //cerr << SQMat.size() << endl;
        // This will hold the sum for *each block*
        sumArr = vector<vector<ll> > (NR);

        //decompose vector
        for(int i = 0; i < (int)V.size(); i++) {
            int row = i / NR;
            int col = i % NC;
            SQMat[row][col] = V[i];
            sumArr[row].push_back(V[i]);
            //cerr << sumArr[row].size() << endl;
        }
        //get sum for each row (assume sum will never exceed 10^9)
        for(int i = 0; i < NR; i++) {
            sort(sumArr[i].begin(), sumArr[i].end());
        }
    }

    //void update(int pos, int delta) {
    //    sumArr[pos%blockN] += delta; //update row sum
    //    SQMat[pos/blockN][pos%blockN] += delta; //update actual element
    //}

    int queryRange(int l, int r, ll x) {
        ll ans = 0;
        int startRow = l/NR;
        int endRow = r/NR;
        int startCol = l % NC;
        int endCol = r % NC;
        // query starts and ends on same bucket
        if (startRow == endRow) {
            cerr << x << " query 1 " << endl;
            for(int i = startCol; i <= endCol; i++)
                if (SQMat[startRow][i] < x) ans++;
            return ans;
        }
        //query does not start and end on same bucket (start and end row will be different)
        cerr << x << " query 2 " << endl;
        for(int i = startCol; i < NC; i++) {
            if (SQMat[startRow][i] < x)
                ans++, cout << ans  << " is " << endl;
        }
        for(int i = startRow+1; i < endRow; i++) {
            int tp = lower_bound(sumArr[i].begin(), sumArr[i].end(), x) - sumArr[i].begin();
            ans += tp;
            cerr << tp << endl;
        }
        for(int i = 0; i <= endCol; i++) {
            if (SQMat[endRow][i] < x) ans++;
        }

        return ans;
    }
};

int main() {
    int n;
    cin >> n;
    VL V(n);
    for(ll& i : V)
        cin >> i;
    int q;
    cin >> q;
    SQRTDecomp D(V);
    while(q--) {
        int i,j;
        ll k;
        cin >> i >> j >> k;
        --i,--j;
        cout << D.queryRange(i,j,k) << endl;
    }
    return 0;
}