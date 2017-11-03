#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <list>
#define INF (int)1e9;
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

int main() {
    int N;
    cin >> N;
    string S;
    bool dig = false;
    bool low = false;
    bool high = false;
    bool sp = false;
    for(int i = 0; i < N; i++) {
        char x;
        cin >> x;
        S += x;
    }

    for(int i = 0; i < S.length(); i++) {
        //check high
        for(int i = 0; i < S.length(); i++) {
            if (S[i] >= 65 && S[i] <= 90) {
                high = true;
                break;
            }
        }
        //chehck low
        for(int i = 0; i < S.length(); i++) {
            if(S[i] >= 97 && S[i] <= 122) {
                low = true;
                break;
            }
        }

        //checkDigit
        for(int i = 0; i < S.length(); i++) {
            if (S[i] >= 48 && S[i] <= 57) {
                dig = true;
                break;
            }
        }

        //check special
        string SC = "!@#$%^&*()-+";
        for(int i = 0; i < S.length(); i++) {
            if (S[i] == SC[0] || S[i] == SC[1] || S[i] == SC[2] || S[i] == SC[3] ||
                S[i] == SC[4] || S[i] == SC[5] || S[i] == SC[6] || S[i] == SC[7] ||
                S[i] == SC[8] || S[i] == SC[9] || S[i] == SC[10] || S[i] == SC[11]) {
                    sp = true;
                    break;
                }
        }

    }
    int minC = 0;

    if (S.length() < 6) {
        minC = 6 - S.length();
        cout << minC << endl;
        return 0;
    }

    if (dig == false) minC++;
    if (low == false) minC++;
    if (high == false) minC++;
    if (sp == false) minC++;


    cout << minC << endl;


    return 0;

}


// if (S.length() < 6) {
//     minC = 6 - S.length();
//     cout << minC << endl;
//     return 0;
// }

// if (dig && low && high && sp) {
//     cout << 0 << endl;
//     return 0;
// }
// if ((dig && low && high && !sp || dig && low && !high && sp || dig && !low && high && sp || !dig && low && high && sp) {
//     cout << 1 << endl;
//     return 0;
// }

// if ((dig && low && !high && !sp) || dig && !low && !high && sp || !dig && !low && high && sp || !dig && low && !high && sp || !dig && low && high && !sp) {
//     cout << 2 << endl;
//     return 0;
// }
