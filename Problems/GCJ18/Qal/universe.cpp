#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define INF 1000000007

string swap(string& s, int i, int j) {
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    return s;
}

int main() {
    int T;
    cin >> T;
    int cs = 1;
    while(T--) {
        long n, dam = 0, ch = 1, chk = 0, mindmg = INF;
        string s;
        cin >> n >> s;
        bool fd = 0;
        string ns = s;
        for(int i = 0; i < s.size(); i++) {
            if(ns[i] == 'C') {
                    ch *= 2;
                }
                else {
                    dam += ch;
                }
        }
        if (dam <= n) {
            cout << "Case #" << cs << ": " << 0 << endl;
        }
        else {
            for(int k = 0; k < s.size(); k++) {
                bool kd = 0;
                for(int i = 0; i < s.size(); i++) {
                    dam = 0;
                    ch = 1;
                    if(i+1 != s.size() && ns[i] == 'C' && ns[i+1] == 'S'){
                        ns = swap(ns,i,i+1);
                        chk++;
                    }
                    for(int j = 0; j < s.length(); j++){
                        if(ns[j] == 'C') {
                            ch *= 2;
                        }
                        else {
                            dam += ch;
                        }
                    }
                    //cerr << dam << ' ' << ns << endl;
                    mindmg = min(dam, mindmg);
                    //got min swap
                    if (mindmg <= n) {
                        cout << "Case #" << cs << ": " << chk << endl;
                        fd = 1;
                        kd = 1;
                        break;
                    }
                }
                if (kd)
                    break;
            }
            //cerr << mindmg << endl;
            if (!fd) {
                cout << "Case #" << cs << ": " << "IMPOSSIBLE" << endl;
            }
        }
        cs++;
    }
    return 0;
}