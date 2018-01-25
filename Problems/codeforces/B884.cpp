#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, X;
    cin >> N >> X;
    int acc = 0;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        acc += x;
    }

    if (acc + (N-1) == X) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}