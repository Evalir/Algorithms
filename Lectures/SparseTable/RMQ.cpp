#include <bits/stdc++.h>
using namespace std;

const int MAXN = 20;
const int K = floor(log2(MAXN)) + 1;
int logg[MAXN + 1];
int SparseTable[20][20]; //set second parameter actually to K in practice
int a[MAXN + 1];

void fillLog() {
    logg[1] = 0;
    for(int i = 2; i <= MAXN; i++) logg[i] = logg[i / 2] + 1;
}

void precompute() {
    for(int i = 0; i < MAXN; i++) SparseTable[i][0] = a[i];
    
    for(int j = 1; j <= K; j++) { //define 2^j
        for(int i = 0; i + (1 << j) - 1 < MAXN; i++) //looking i + 2^j
            SparseTable[i][j] =  min(SparseTable[i][j - 1], SparseTable[i + (1 << (j - 1))][j - 1]);
    }
}

int query(int l, int r) {
    if (l > r) return -( 1 << 30);
    int j = logg[r - l + 1];
    int q = min(SparseTable[l][j], SparseTable[r - ( 1 << j) + 1][j]);
    return q;
}

int main() {
    srand(947);
    for(int i = 0; i < MAXN; i++) a[i] = rand() % 20;
    for(int i = 0; i < MAXN; i++) cout << "a[" << i << "] : " << a[i] << endl;
    fillLog();
    precompute();
    for(int i = 0; i < 10; i++) {
        int l = rand() % 20;
        int r = rand() % 20;
        if (l > r) swap(l,r);
        cout << "query (" << l << ' ' << r << ") : " << query(l,r) << endl;
    }
}
