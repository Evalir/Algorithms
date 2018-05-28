#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

long long joa1[1000000],joa2[1000000],joa3[10000000];
int main() {
    
    long long N, P, Q, R;
    cin >> N >> P >> Q >> R;
    int el[N+10];
    
    for(int i = 0; i < N; i++)
        cin >> el[i];
    
    joa1[0] = el[0]*P;
    for(int i = 1; i < N; i++) {
        joa1[i] = max(joa1[i-1], el[i]*P);
    }
    joa2[0] = joa1[0]+el[0]*Q;
    for(int i = 1; i < N; i++) {
        joa2[i] = max(joa2[i-1], joa1[i]+el[i]*Q);
    }
    joa3[0] = joa2[0]+el[0]*R;
    for(int i = 1; i < N; i++) {
        joa3[i] = max(joa3[i-1], joa2[i]+el[i]*R);
    }
    cout << joa3[N-1] << endl;
    return 0;
}