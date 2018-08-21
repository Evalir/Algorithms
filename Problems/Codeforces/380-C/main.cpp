#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
using namespace std;

string S;

struct Node {
    int matched;
    int unmatched_open;
    int unmatched_close;
};

Node join(Node left, Node right) {
    Node res;
    int new_matches = min(left.unmatched_open, right.unmatched_close);
    res.matched = left.matched + right.matched + new_matches;
    res.unmatched_open  = left.unmatched_open + right.unmatched_open - new_matches;
    res.unmatched_close = left.unmatched_close + right.unmatched_close - new_matches;
    return res;
}

const int MAXN = 1000000;
Node tree[ 4*MAXN+100 ];

void build(int id, int L, int R) {
    if (L == R) {
        tree[id] = {0, S[L] == '(' ? 1 : 0, S[L] == ')' ? 1 : 0};
        return;
    }
    int mid = (L+R)/2;
    build(id*2, L, mid);
    build(id*2+1, mid+1, R);
    tree[id] = join(tree[id*2], tree[id*2+1]);
}

Node query(int id, int L, int R, int p, int q) {
    if (q < L || p > R)
        return (Node) {0, 0, 0};
    if (p <= L && R <= q)
        return tree[id];
    int mid = (L+R)/2;
    Node res_left = query(id*2, L, mid, p, q);
    Node res_right = query(id*2+1, mid+1, R, p, q);
    return join(res_left, res_right);
}

void update(int id, int L, int R, int p, char val) {
    if (L == R) {
        S[L] = val;
        tree[id] = {0, S[L] == '(' ? 1 : 0, S[L] == ')' ? 1 : 0};
        return;
    }
    int mid = (L+R)/2;
    if (p <= mid)
        update(id*2, L, mid, p, val);
    else
        update(id*2+1, mid+1, R, p, val);
    tree[id] = join(tree[id*2], tree[id*2+1]);
}


void build() {
    build(1, 0, int(S.size())-1);
}

Node query(int p, int q) {
    return query(1, 0, int(S.size())-1, p, q);
}

void update(int p, char val) {
    update(1, 0, int(S.size())-1, p, val);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> S;
    build();

    int Q;
    cin >> Q;
    for (int qry = 1; qry <= Q; ++qry) {
        int p, q;
        cin >> p >> q;
        --p, --q;
        Node res = query(p, q);
        cout << res.matched * 2 << '\n';
    }
}