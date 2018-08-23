#include <bits/stdc++.h>
using namespace std;

void bf(vector<int>& a) {
    vector<int> dp(a.size(),1);
    for(int i = 0; i < (int)a.size(); i++)
        for(int j = 0; j < i; j++)
            if (a[j] < a[i])
                dp[i] = max(dp[i], dp[j]+1);
    int ans = *max_element(dp.begin(), dp.end());
    cout << ans  << " bf "<< endl;
}
struct FenwickTree {
    
    vector<int> tri;
    FenwickTree(int N) : tri(N, 0) {}
    void add(int x, int d) {
        for (int i = x + 1; i < tri.size(); i += i&(-i)) {
            tri[i] = max(tri[i],d);
            //cout << i << " :add : " << tri[i] << endl;
        }
    }
    
    int query(int x) {
        int ans = 0;
        for (int i = x + 1; i > 0; i -= i&(-i)) {
            ans = max(ans,tri[i]);
            //cout << i << " get: " << tri[i] << endl;
        }
        return ans;
    }
    
    void pr() {
        for(int i = 0; i < (int)tri.size(); i++)
            cout << i+1 << ' ';
        cout << endl;
        for(int i = 0; i < (int)tri.size(); i++)
            cout << tri[i] << ' ';
        cout << endl;
    }
};

/*
 7
 1 3 5 4 3 7 3
 */
int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int &t : s) t = rand() % 7;
    for(int &t : s)
        cout << t << ' ';
    cout << endl;
    FenwickTree FT(22);
    bf(s);
    int ans = 0;
    for(int i = 0; i < (int)s.size(); i++) {
        int q = FT.query(s[i]);
        ans = max(ans, q+1);
        FT.add(s[i],q+1);
     // FT.pr();
    }
    cout << ans << endl;
}
