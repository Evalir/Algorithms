#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cassert>
#include <string.h>
using namespace std;

void bruteforce(int sz) {
    vector<int> a(sz);
    vector<pair<vector<int>,int> > ans;
    int sum = 1e9;
    for(int i = 0; i < sz; i++) {
        a[i] = i+1;
    }
    int lis[20];
    int lds[20];
    do {
        memset(lis,1, sizeof(lis));
        memset(lds,1, sizeof(lis));
        for(int i = 0; i < sz; i++) {
            lis[i] = 1;
            lds[i] = 1;
            for(int j = 0; j < i; j++) {
                if (a[j] < a[i])
                    lis[i] = max(lis[i], lis[j] + 1);
                if (a[j] > a[i])
                    lds[i] = max(lds[i], lds[j] + 1);
            }
        }
//        cout << "for " << endl;
//        for(auto t : a) cout << t << ' ';
        //cout << endl;
        //cout << "BEST LIS: " << *max_element(lis, lis + sz) << endl;
        //cout << "BEST LDS: " << *max_element(lds, lds + sz) << endl;
        if (*max_element(lis, lis + sz) + *max_element(lds, lds + sz) <= sum) {
            sum = *max_element(lis, lis + sz) + *max_element(lds, lds + sz);
                ans.push_back({a,sum});
        }

    } while(next_permutation(a.begin(), a.end()));

    cout << "Best sequences with sum " << sum << " is" << endl;
    int cnt = 0;
    for(auto t : ans) {
        if (t.second == sum && cnt < 500) {
            for(auto i : t.first) {
                cout << i << ' ';
            }
            cout << endl;
            cnt++;
        }
    }

}
bool u[(int)1e5+7];
int main() {
    //bruteforce(5);
    memset(u, 0, sizeof(u));
    int n;
    cin >> n;
    int st = 3;
    if (n < 9) {
        st = 1;
        while(st <= n) {
            if (st + 1 <= n)
                cout << st+1 << ' ' << st << ' ';
            else {
                cout << st << endl;
                break;
            }
            st += 2;
        }
    }
    else {
        st = floor(sqrt(n));
        cerr << st << endl;
        while (st <= n) {
            for(int i = st; i > st - floor(sqrt(n)) && i > 0 && !u[i]; i--) {
                cout << i << ' ';
                u[i] = true;
            }

            st += floor(sqrt(n));
        }
        for (int i = n; i > 0 && !u[i]; i--) {
            cout << i << " ";
        }
    }

    return 0;
}