#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    vector<long> books;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        books.push_back(x);
    }
    
    int l = 0, r = 0;
    int sum = 0;
    int nb = 0;
    int ans = 0;
    
    while(l < n) {
        while (sum <= t) {
            if (r < n) {
                sum += books[r];
                r++;
                nb++;
            }
        }
        ans = max(nb, ans);
        
        while (sum >= t) {
            if (l < n) {
                sum -= books[l];
                l++;
            }
        }
        
    }
    
    cout << ans << endl;
    return 0;
}
