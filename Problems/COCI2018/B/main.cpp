#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    vector<string> A(n), B(n);
    for(auto &t : A) cin >> t;
    for(auto &t : B) cin >> t;
    map<string, string> MC;
    map<string,string> corr;
    for(int i = 0; i < n; i++) {
        //case 1 -> both integers
        if (A[i][0] < 'A' && B[i][0] < 'A') {
            //cout << A[i] << ' ' << B[i] << " checkA" << endl;
            if (A[i] == B[i]) continue;
            else {
                cout << "NE" << endl;
                return 0;
            }
        }//case 2 - 1 integer, 1 string
        else if ((A[i][0] < 'A' && B[i][0] >= 'A') || (A[i][0] >= 'A' && B[i][0] < 'A')) {
            //cout << A[i] << ' ' << B[i] << " checkB" << endl;
            if ((A[i][0] < 'A' && B[i][0] >= 'A')) {
                if (MC.count(B[i]) > 0) {
                    if (A[i] == MC[B[i]]) continue;
                    else {
                        if (MC[B[i]] == "?") {
                            MC[B[i]] = A[i];
                            MC[corr[B[i]]] = A[i];
                        } else {
                            cout << "NE" << endl;
                            return 0;
                        }
                    }
                } else MC[B[i]] = A[i];
            } else if ((A[i][0] >= 'A' && B[i][0] < 'A')) {
                if (MC.count(A[i]) > 0) {
                    if (B[i] == MC[A[i]]) continue;
                    else {
                        if (MC[A[i]] == "?") {
                            MC[A[i]] = B[i];
                            MC[corr[A[i]]] = B[i];
                        } else {
                            cout << "NE" << endl;
                            return 0;
                        }
                    }
                } else MC[A[i]] = B[i];
            }
        } //case 3 - two strings
        else if (A[i][0] >= 'A' && B[i][0] >= 'A') {
            //cout << A[i] << ' ' << B[i] << " checkC" << endl;
            if (MC.count(A[i]) > 0 && MC.count(B[i]) == 0) {
                MC[B[i]] = MC[A[i]];
            } else if (MC.count(A[i]) == 0 && MC.count(B[i]) > 0) {
                MC[A[i]] = MC[B[i]];
            } else if (MC.count(A[i]) == 0 && MC.count(B[i]) == 0) {
                MC[A[i]] = MC[B[i]] = '?';
                corr[A[i]] = B[i];
                corr[B[i] = A[i]];
            } else if (MC.count(A[i]) > 0 && MC.count(B[i]) > 0) {
                if (MC[A[i]] == MC[B[i]]) continue;
                else {
                    cout << "NE" << endl;
                    return 0;
                }
            }
        }
    }
    cout << "DA" << endl;
    return 0;
}