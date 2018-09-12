#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
    int n;
    cin >> n;
    vector<Long> s(n),z(n);
    for(auto &t : s) cin >> t;
    for(auto &t : z) cin >> t;
    Long sa = accumulate(s.begin(),s.end(), 0LL);
    Long sb = accumulate(z.begin(), z.end(), 0LL);
    sort(s.begin(), s.end());
    sort(z.begin(), z.end());
    int pa = n-1, pb = n-1;
    bool isF = true;
    while(pa >= 0 && pb >= 0) {
        if (pa >= 0 && pb >= 0) {
            if (isF) {
                if (z[pb] >= s[pa]) {
                    sb -= z[pb];
                    z.pop_back();
                    pb--;
                }
                else {
                    pa--;
                    s.pop_back();
                }
                isF = !isF;
            }
            else {
                if (z[pb] >= s[pa]) {
                    pb--;
                    z.pop_back();
                }
                else {
                    sa -= s[pa];
                    s.pop_back();
                    pa--;
                }
                isF = !isF;
            }
        }
    }
    while(pa >= 0) {
        if(isF) {
            pa--;
            s.pop_back();
            isF = !isF;
        }
        else {
            sa -= s[pa];
            pa--;
            s.pop_back();
            isF = !isF;
        }
    }
    while(pb >= 0) {
        if(!isF) {
            pb--;
            z.pop_back();
            isF = !isF;
        }
        else {
            sb -= z[pb];
            pb--;
            z.pop_back();
            isF = !isF;
        }
    }
    cout << sa-sb << endl;
    return 0;
}