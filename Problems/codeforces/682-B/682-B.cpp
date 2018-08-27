#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n);
    for(int &t : s) cin >> t;
    sort(s.begin(), s.end());
    int cz = 1;
    for(int i = 0; i < n; i++) {
        if (s[i] > cz)
            s[i] = cz, ++cz;
        else if (s[i] == cz) 
            ++cz;
    }
    cout << cz << endl;
    return 0;
}