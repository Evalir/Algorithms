#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> el;
    vector<int> awake;
    int sum = 0;
    vector<long long> PS(n, 0);
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        el.push_back(x);
    }
    
    for(int i = 0 ; i < n; i++) {
        int x;
        cin >> x;
        awake.push_back(x);
    }
    int acc = 0;
    for(int i = 0 ; i < n; i++) {
        
        if (awake[i] == 1) {
            sum += el[i];
            PS[i] = acc;
        }
        else {
            acc += el[i];
            PS[i] = acc;
        }
    }
    long long ans = sum;
    //cerr << "PS" << endl;
    //cerr << "ans is " << ans << " sum is " << sum << endl;
    //cerr << endl;
    for(int i = 0; i < n-k+1; i++) {
        if(i != 0) {
            ans = max(ans, sum+(PS[i+k-1]-PS[i-1]));
            //cerr << "PS INTERVAL " << PS[i+k-1]-PS[i-1] << " in between " << i+k-1 << ' ' << i-1 << endl;
        }
        else {
            ans = max(ans, sum+(PS[i+k-1]));
        }
    }
    
    cout << ans << endl;
    
}