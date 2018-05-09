#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    pair<int,int> el;
    int ln = 1000000;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x < ln) {
            el.first = x;
            el.second = i+1;
            ln = x;
        }
    }
    
    cout << el.first << ' ' << el.second << endl;
    return 0;
}
