#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> el(3);
    cin >> el[0] >> el[1] >> el[2];
    sort(el.begin(), el.end());
    int k;
    cin >> k;
    while(k--) {
        el[2] *= 2;
    }
    cout << el[0] + el[1] + el[2] << endl;
    return 0;
    
}
