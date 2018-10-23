#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, K;
    scanf("%d%d", &N,&K);
    int anw[110][110];
    memset(anw,0,sizeof(anw));
    vector<string> G(N);
    for(int i = 0; i < N; i++) {
        char buf[N+10];
        scanf("%s", buf);
        G[i] = buf;
    }
    int mC = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            // hor
            if (j + K <= N) {
                bool ok = 1;
                for (int k = 0; k < K && ok; ++k) {
                    if (G[i][j+k] != '.') ok = 0;
                }
                if (ok) {
                    for (int k = 0; k < K; ++k) {
                        anw[i][j+k]++;
                        if (mC < anw[i][j+k]) {
                            mC = anw[i][j+k];
                        }
                    }
                }
            }
            // ver
            if (i + K <= N) {
                bool ok = 1;
                for (int k = 0; k < K && ok; ++k) {
                    if (G[i+k][j] != '.') ok = 0;
                }
                if (ok) {
                    for (int k = 0; k < K; ++k) {
                        anw[i+k][j]++;
                        if (mC < anw[i+k][j]) {
                            mC = anw[i+k][j];
                        }
                    }
                }
            }
        }
    }
    pair<int,int> ans;
    for(int i = 0; i < N; i++)
        for(int j = 0; j < N; j++)
            if (anw[i][j] == mC) {
                ans.first = i + 1;
                ans.second = j + 1;
            }
    printf("%d %d\n", ans.first, ans.second);
}