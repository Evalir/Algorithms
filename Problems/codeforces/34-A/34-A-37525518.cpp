#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> sold(n, 0);
    
    for(int i = 0; i < n; i++) {
        cin >> sold[i];
    }
    
    int a, b;
    int ans = 1000000;
    for(int i = 0; i < n-1; i++) {
        if (abs(sold[i]-sold[i+1]) < ans) {
            ans = min(abs(sold[i]-sold[i+1]), ans);
            a = i+1;
            b = i+2;
        }
    }
    if (abs(sold[0]-sold[sold.size()-1]) < ans) {
        a = 1;
        b = sold.size();
    }
    
    cout << a << ' ' << b << endl;
    return 0;
    
    
}