#include <bits/stdc++.h>
using namespace std;
using pii = pair<string,int>;
struct F {
    string N;
    int t = 0, p = 0, g = 0;
};
int main() {
    int n;
    cin >> n;
    vector<F> V(n);
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x >> V[i].N;
        while(x-- > 0) {
            string S;
            cin >> S;
            string nS;
            for(auto r : S) if (r != '-') nS += r;
            bool tax = true;
            for(int j = 0; j < (int)nS.size()-1; j++) {
                if (nS[j] != nS[j+1]) tax = false;
            }
            if (tax) {
                V[i].t++;
                continue;
            }
            bool p = true;
            for(int j = 0; j < (int)nS.size(); j++) {
                if (i) {
                    if (nS[j] > nS[j-1]) p = false;
                }
            }
            if (p) V[i].p++;
            else V[i].g++;
        }
    }
    pii ans = {"",0};
    for(auto F : V) {
        if (ans.second < F.t) {
            ans.first = F.N;
            ans.second = F.t;
        }
    }
    cout << "If you want to call a taxi, you should call: " << ans.first << "." << endl;
    ans = {"",0};
    for(auto F : V) {
        if (ans.second < F.p) {
            ans.first = F.N;
            ans.second = F.p;
        }
    }
    cout << "If you want to call a taxi, you should call: " << ans.first << "." << endl;
    ans = {"",0};
    return 0;
}