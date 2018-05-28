#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int maxdist = -1;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        maxdist = max(maxdist, min(x-1, 1000000-x));
    }
    
    cout << maxdist << endl;
    return 0;
}