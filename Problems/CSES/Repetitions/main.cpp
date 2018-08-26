#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;

int main() {
    string S;
    cin >> S;
    char li;
    int best = 0, cnt = 0;
    for(int i = 0; i < (int)S.size(); i++) {
        if (!i) {
            li = S[i];
            cnt++;
            best = max(best, cnt);
        }
        if (i) {
            if (S[i] == li) {
                cnt++;
                best = max(best,cnt);
            }
            else {
                cnt = 1;
                li = S[i];
                best = max(best, cnt);
            }
        }
    }
    cout << best << endl;
    return 0;
}