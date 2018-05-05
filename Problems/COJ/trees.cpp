#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> s(n+10);
    for(int i = 0; i < n; i++)
        cin >> s[i];
    int ans = 0;
    sort(s.begin(), s.end(), greater<int>());
    for(int i = 0; i < n; i++) {
        ans = max(ans, s[i]+i+1);
    }
    cout << ans+1 << endl;
    return 0;
}
