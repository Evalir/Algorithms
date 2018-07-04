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
    vector<vector<int> > B;
    vector<int> ROWSUM;
    RangeSumQuery(const vector<int>& V) {
        NC = sqrt(V.size());
        NR = V.size() / NC + 1;
        B = vector<vector<int> >(NR, vector<int>(NC));
        ROWSUM = vector<int>(NR, 0);
        for(int i = 0; i < int(V.size()); i++) {
            int row = i / NC;
            int col = i % NC;
            B[row][col] = V[i];
            ROWSUM[row] += V[i];
        }

        for(int r = 0; r < NR; ++r) {
            for(int c = 0; c < NC; ++c) {
                cout << B[r][c] << ' ';
            }
            cout << "SUM : " << ROWSUM[r] << endl;
        }
    }

    void increase(int pos, int delta) {
        int row = pos / NC;
        int col = pos % NC;
        B[row][col] += delta;
        ROWSUM[row] += delta;
    }

    int query(int a, int b) {
        int rowa = a / NC;
        int cola = a % NC;

        int rowb = b / NC;
        int colb = b % NC;

        int sum = 0;

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
    vector<int> V = {1,3,2,4,5,7,6,8,9,10};
    RangeSumQuery SQD(V);
    cout << SQD.query(4,8) << endl;
    cout << SQD.query(3,6) << endl;
    return 0;
}