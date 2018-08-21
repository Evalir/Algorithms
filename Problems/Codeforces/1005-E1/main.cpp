#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m;
    vector<int> s(n), z(n);
    for(int &t : s) cin >> t;
    for(int i = 0; i < n; i++) {
        if (s[i] < m)
            z[i] = -1;
        else if (s[i] > m)
            z[i] = 1;
        else if (s[i] == k)
            k = i;
    }
    for(int &t: z)
        cout << t << ' ';
    vector<int> b(n),l(n), f(5);
    for(int i = 0; i < n; i++) {
        if (i) {
            if (i >)
            b[i] = b[i-1] + (z[i] == 1);
            l[i] = l[i-1] + (z[i] == -1);
        }
        else if (!i){
            b[i] = (z[i] == 1);
            l[i] = (z[i] == -1);
        }
    }
    f[0] = l[n-1];
    f[1] = b[n-1];
    cout << endl;
    for(int &t: b)
        cout << t << ' ';
    cout << endl;
    for(int &t: l)
        cout << t << ' ';
    return 0;
}