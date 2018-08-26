#include <bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int> s;
ll mm[110][110];



int main() {
    int n;
    cin >> n;
    s.clear();
    s.resize(n);
    memset(mm, -1, sizeof(mm));
    for(int i = 0; i < n; i++)
        scanf("%d", &s[i]);
    ll ans = dp(0,1);
    cout << ans << endl;
}





//#include <bits/stdc++.h>
//using namespace std;
//using ll = long long;
//vector<ll> a;
//ll dp() {
//    ll maxel, minel, ans;
//    maxel = minel = ans = a[0];
//    for(int i = 1 ; i < (int)a.size(); i++) {
//        if (a[i] > 0) {
//            maxel = max(maxel*a[i], a[i]);
//            minel = min(minel*a[i], a[i]);
//        }
//        else {
//            ll maxl = max(minel*a[i], a[i]);
//            minel = min(maxel*a[i], a[i]);
//            maxel = maxl;
//        }
//        ans = max(maxel, minel);
//    }
//    return ans;
//}
//int main() {
//    int n;
//    while(scanf("%d", &n) != EOF) {
//        for(int i = 0; ; i++) {
//            cin >> n;
//            if (n == -99999)
//                break;
//            a.push_back(n);
//        }
//        ll ans = dp();
//        cout << ans << endl;
//    }
//    return 0;
//}
