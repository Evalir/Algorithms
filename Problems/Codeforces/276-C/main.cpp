#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
#include <queue>
#include <stack>
#include <map>
#include <cmath>
#include <climits>
#define joa = ios_base::sync_with_stdio(false);
#define MOD 1000000007;
using namespace std;

using ll = long long;
using pll = pair<ll,ll>;
using VI = vector<int>;
using VL = vector<long>;
using VVI = vector<VI>;

struct RangeSumQuery {
    int NC,NR;
    vector<vector<ll> > B;
    vector<ll> ROWSUM;
    RangeSumQuery(const vector<ll>& V) {
        NC = sqrt(V.size());
        NR = V.size() / NC + 1;
        B = vector<vector<ll> >(NR, vector<ll>(NC));
        ROWSUM = vector<ll>(NR, 0);
        for(int i = 0; i < int(V.size()); i++) {
            int row = i / NC;
            int col = i % NC;
            B[row][col] = V[i];
            ROWSUM[row] += V[i];
        }
    }

    void update(int pos, ll delta) {
        int row = pos / NC;
        int col = pos % NC;
        B[row][col] += delta;
        ROWSUM[row] += delta;
    }

    ll query(int a, int b) {
        int rowa = a / NC;
        int cola = a % NC;

        int rowb = b / NC;
        int colb = b % NC;

        ll sum = 0;

        if (rowa == rowb) {
            for(int j = cola; j <= colb; j++)
                sum += B[rowa][j];
            return sum;
        }

        for(int j = cola; j < NC; j++) {
            sum += B[rowa][j];
        }

        for(int r = rowa+1; r < rowb; r++) {
            sum += ROWSUM[r];
        }

        for(int j = 0; j <= colb; j++) {
            sum += B[rowb][j];
        }

        return sum;
    }
};

int main() {
    int n,q;
    cin >> n >> q;
    vector<ll> V(n);
    for(ll& i : V)
        cin >> i;
    sort(V.begin(),V.end(), greater<ll>());
    RangeSumQuery SQD(V);
    ll ans = 0;
    while(q--) {
        int l,r;
        cin >> l >> r;
        --l,--r;
        ans += SQD.query(l,r);
    }
    cout << ans << endl;
    return 0;
}