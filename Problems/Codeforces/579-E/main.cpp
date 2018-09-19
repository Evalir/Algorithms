#include <bits/stdc++.h>
using namespace std;
vector<double> V;
double check(double x) {
    double cnt = 0;
    double mins = 0, maxs = 0, ans = 0;
    for(int i = 0; i < V.size(); i++) {
        cnt += V[i]*1.00-x;
        ans = max(fabs(cnt-maxs), ans);
        ans = max(fabs(cnt-mins), ans);
        mins = min(cnt,mins);
        maxs = max(cnt,maxs);
    }
    //cout << "for " << x << " ans is " << ans << endl;
    return ans;
}
int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        double x;
        cin >> x;
        x *= 1.00;
        V.push_back(x);
    }
    double le = -1e6, ri = 1e6, res = -1;
    for(int i=0; i<250; i++) {
        double l1 = le + (le-ri)/3.00;
        double l2 = le + 2*(le-ri)/3.00;
        if(abs(check(l1)) < abs(check((l2)))) ri = l2; else le = l1;
    }
    res = check((le+ri)/2);
    printf("%.10lf\n",abs(res));
    return 0;
}