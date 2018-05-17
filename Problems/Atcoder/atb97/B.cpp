#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int x;
    cin >> x;
    unsigned long long por = 1;
    vector<unsigned long long> ans;
    for(int i = 1; i <= 100; i++) {
        for(int k = 2; k <= 10; k++) {
            ans.push_back(pow(i,k));
        }
    }
    for(int i = 0; i < ans.size(); i++) {
        //cerr << "VI " << ans[i] << endl;
        if (ans[i] <= x)
            por = max(por,ans[i]);
    }
    cout << por << endl;
    return 0;
}
