#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n, k;
    double gsum = 0;
    double res = 0;
    int ires = 0;
    vector<int> vi;
    cin >> n >> k;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        vi.push_back(x);
    }

    sort(vi.begin(), vi.end());

    for(int i = 0; i < k; i++) {
    		gsum += vi[i];
    }

//    cout << "GSUM IS " << gsum << endl;

    res = gsum / 100.0;
    ires = ceil(res);

    cout << ires << endl;


    return 0;
}
