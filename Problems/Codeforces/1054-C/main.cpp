#include <bits/stdc++.h>
using namespace std;
using Long = long long;
struct ST {
    int pos, l,r, sum;
};
bool comp1(ST a, ST b) {
    if (a.sum != b.sum) return a.sum < b.sum;
    else if (max(a.l,a.r) != max(b.l,b.r)) return max(a.l,a.r) < max(b.l,b.r);
    return a.pos < b.pos;
}

int main() {
    int n;
    cin >> n;
    vector<int> L(n), R(n), S(n), Ans(n, 0);
    vector<ST> st(n);
    for(auto &t : L) cin >> t;
    for(auto &t : R) cin >> t;
    for(int i = 0; i < n ; i++) S[i] = L[i] + R[i];
    for(int i = 0; i < n; i++) st[i] = {i,L[i],R[i],S[i]};
    if (L[0] > 0 || R[n-1] > 0) {
        cout << "NO" << endl;
        return 0;
    }
    sort(st.begin(),st.end(), comp1);
    int k = n;
    for(int i = 0 ; i < n; i++) {
        int cl = 0, cr = 0;
        //go left
        for(int j = st[i].pos - 1; j >= 0; j--) {
            if (Ans[j] > k) cl++;
        }
        for(int j = st[i].pos + 1; j < n; j++) {
            if (Ans[j] > k) cr++;
        }
        if (cl == L[st[i].pos] && cr == R[st[i].pos]) Ans[st[i].pos] = k;
        else {
            k--, cl = 0, cr = 0;
            for(int j = st[i].pos - 1; j >= 0; j--) {
                if (Ans[j] > k) cl++;
            }
            for(int j = st[i].pos + 1; j < n; j++) {
                if (Ans[j] > k) cr++;
            }
            if (cl == L[st[i].pos] && cr == R[st[i].pos]) Ans[st[i].pos] = k;
            else {
                cout << "NO" << endl;
                return 0;
            }
        }
    }
    cout << "YES" << endl;
    for(auto &i : Ans) cout << i << ' ';
    puts("");
    return 0;
}

/*
7
0 0 0 1 1 2 1
6 4 1 3 1 1 0
 * */