#include <bits/stdc++.h>
using namespace std;
using Long = long long;
int main() {
    int n;
    scanf("%d", &n);
    vector<Long> X(n), Y(n), PX(n), PY(n);
    for(int i = 0; i < n; i++) {
        scanf("%lld %lld", &X[i], &Y[i]);
    }
    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());
    for(int i = 0; i < n; i++) {
        if (i) {
            PX[i] = PX[i-1] + X[i];
            PY[i] = PY[i-1] + Y[i];
        }
        else {
            PX[i] = X[i];
            PY[i] = Y[i];
        }
    }
    int q;
    scanf("%d", &q);
    //for(auto i : X) cout << i << ' ';
    cout << endl;
    while(q--) {
        Long px,py;
        scanf("%lld %lld", &px, &py);
        Long lxm = lower_bound(X.begin(), X.end(), px) - X.begin();
        Long lxb = n - (lower_bound(X.begin(), X.end(), px) - X.begin());
        Long sumX = 0;
        cout << "for x " << px << " smaller " << lxm << " bigger " << lxb << endl;
        if (lxm == n)
            sumX += (px*lxm) - PX[n-1];
        else if (lxm > 0)
            sumX += (px*lxm) - PX[lxm-1];
        if (lxb == n)
            sumX += (PX[n-1] - (px*lxb));
        else if (lxm > 0)
            sumX += (PX[lxb] - (px*lxb));
        cout << sumX << " is " << endl;
        Long lym = lower_bound(Y.begin(), Y.end(), py) - Y.begin();
        Long lyb = n - (lower_bound(Y.begin(), Y.end(), py) - Y.begin());
        Long sumY = 0;
        if (lym > 0)
            sumY += (py*lym) - PY[lym-1];
        if (lyb > 0)
            sumY += (PY[lyb] - (py*lyb));
        cout << sumY << " is" << endl;
        cout << "for y smaller " << lym << " bigger " << lyb << endl;

        printf("%lld\n", sumX+sumY);
    }
    return 0;
}

