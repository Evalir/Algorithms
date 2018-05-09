#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long arr[n+1];
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    long long x;
    cin >> x;
    for(int i = 0; i < n; i++) {
        if (arr[i] == x) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}
