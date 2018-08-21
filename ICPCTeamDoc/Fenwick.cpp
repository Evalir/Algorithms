struct FenwickTree {
    vector<int> tri;
    FenwickTree(int N) : tri(N+10, 0) {}
    void add(int x, int d) {
        for (int i = x + 1; i < tri.size(); i += i&(-i)) {
            tri[i] += d;            
        }
    }
    int query(int x) {
        int ans = 0;
        for (int i = x + 1; i > 0; i -= i&(-i)) {
            ans += tri[i];
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