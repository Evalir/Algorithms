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
    vector<vector<ll> > SQMat;
    vector<vector<ll> > sumArr;
    SQRTDecomp(vector<ll> V) {
        NC = 1000;
        while(V.size() % NC != 0) V.push_back((0));
        NR = (int)V.size() / NC;
        cerr << "NC : " << NC << endl;
        cerr << "NR : " << NR << endl;

        SQMat = vector<vector<ll> > (NR, vector<ll> (NC));
        sumArr = vector<vector<ll> > (NR);

        for(int i = 0; i < (int)V.size(); i++) {
            int row = i / NC;
            int col = i % NC;
            SQMat[row][col] = V[i];
            sumArr[row].push_back(V[i]);
        }

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
        int startRow = l/NC;
        int endRow = r/NC;
        int startCol = l % NC;
        int endCol = r % NC;
        if (startRow == endRow) {
            for(int i = startCol; i <= endCol; i++)
                if (SQMat[startRow][i] <= x)
                    ans++;
            return r-l+1 - ans;
        }

        for(int i = startCol; i < NC; i++) {
            if (SQMat[startRow][i] <= x) {
                ans++;
            }
        }
        for(int i = startRow+1; i < endRow; i++) {
            int tp = upper_bound(sumArr[i].begin(), sumArr[i].end(), x) - sumArr[i].begin();
            ans += tp;
        }
        for(int i = 0; i <= endCol; i++) {
            if (SQMat[endRow][i] <= x) ans++;
        }

        return r-l+1 - ans;
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
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