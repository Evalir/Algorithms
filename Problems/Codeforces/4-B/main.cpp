#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int n, sum, k = 0, z = 0;
    cin >> n >> sum;
    vector<pair<int,int>> a(n);
    vector<int> anw;
    for(auto &t : a) {
        cin >> t.first >> t.second;
        k += t.second;
        z += t.first;
        anw.push_back(t.second);
    }
    if (k < sum || z > sum) {
        puts("NO");
        return 0;
    }
    puts("YES");
    int pt = n-1;
    while(k > sum) {
        int dif = k-sum;
        if (anw[pt]-dif < a[pt].first) {
            k -= a[pt].second;
            k += a[pt].first;
            anw[pt] = a[pt].first;
            pt--;
        }
        else {
            anw[pt] -= dif;
            break;
        }
    }
    for(auto t: anw)
        cout << t << ' ';

    return 0;
}