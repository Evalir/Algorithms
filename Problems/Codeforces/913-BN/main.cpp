#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    vector<int> T[1010], D(1010);
    for(int i = 1; i < n; i++) {
        int x;
        scanf("%d", &x);
        x--;
        T[x].push_back(i);
        D[x]++;
    }
    for(int i = 0; i < n; i++) {
        if (D[i]) {
            int cnt = 0;
            for(auto v : T[i]) cnt += D[v] == 0;
            if (cnt < 3) {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}