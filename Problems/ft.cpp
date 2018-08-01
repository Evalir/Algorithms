#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define MOD 1000000007;
using namespace std;

using ll = long long;
using pll = pair<ll,ll>;
using VI = vector<int>;
using VL = vector<ll>;
using VVI = vector<VI>;
int N;
vector<ll> s;
struct FenwickTree {
    vector<ll> ft;
    FenwickTree(int N) : ft(N+4, 0) {}
    void add(ll x, ll d) {
        for (ll i = x; i < ft.size(); i += i&(-i)) {
            ft[i] += d;
            //cout << i << " :add : " << tri[i] << endl;
        }
    }

    ll query(ll x) {
        ll cnt = 0;
        for (int i = x; i > 0; i -= i&(-i)) {
            cnt += ft[i];
            //cout << i << " :add : " << tri[i] << endl;
        }
        return cnt;
    }

    void pr() {
        for(ll i = 0; i < (ll)ft.size(); i++)
            cout << ft[i] << ' ';
        cout << endl;
    }
};

bool check(ll target, ll l, ll r, FenwickTree &FT) {
    while(r-l > 1) {
        ll mid = (l+r) / 2;
        ll k = s[mid] - FT.query(mid);
        if (k == target) {
            return true;
        }
        else if (k > target) {
            r = mid;
        } 
        else if (k < target) {
            l = mid;
        }
    }
    return false;
}

int main() {
    cin >> N;
    s.assign(N+3, 0);
    for(ll i = 1; i <= N; i++) cin >> s[i];
    FenwickTree FT(N);
    int q;
    cin >> q;
    while(q--) {
        int t; ll x;
        cin >> t >> x;
        if (t == 1) {
            FT.add(1,1);
            FT.add(x + 1,-1);
            FT.pr();
        }
        else if (t == 2) {
            FT.pr();
            check(x, 0, N+1, FT) == true ? puts("yes") : puts("no");
        }
        else if (t == 3) {
            cout << s[x] - FT.query(x) << endl;
        }
    }
    return 0;
}





