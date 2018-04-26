#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

struct score {
    int t,s;
    bool  operator<  ( const score& right ) const {
        if (s > right.s)
           return true;
        else
           return false;
     }
    
};

int main() {
    int n;
    cin >> n;
    vector<score> s(n+10);
    for(int i = 0; i < n; i++) {
        cin >> s[i].t >> s[i].s;
    }
    stable_sort(s.begin(), s.end());
    for(int i = 0; i < n; i++)
        cout << s[i].t << ' ' << s[i].s << endl;
    return 0;
}
