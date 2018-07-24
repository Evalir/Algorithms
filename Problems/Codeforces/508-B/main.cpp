#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    string S;
    cin >> S;
    int ls = -1;
    int fs = 0;
    int nt = S[(int)S.size()-1] - '0';
    bool f = false;
    for(int i = (int)S.size()-1; i >= 0; i--) {
        int n = S[i]-'0';
        if (n % 2 == 0 && !f) f = true;
        if (n % 2 == 0 && nt > n) {
            if (!fs) fs = i;
            ls = i;
        }
        if (n % 2 == 0 && nt < n) {
            if (!fs) fs = i;
            continue;
        }
    }
    if (f && ls != -1) {
        swap(S[(int) S.size() - 1], S[ls]);
        cout << S << endl;
    }
    else if (f) {
        swap(S[(int)S.size() - 1], S[fs]);
        cout << S << endl;
    }
    else puts("-1");
    return 0;
}