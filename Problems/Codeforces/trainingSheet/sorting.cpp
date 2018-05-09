#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr.emplace_back(x);
    }
    sort(arr.begin(), arr.end());
    for(int i = 0; i < n; i++)
        cout << arr[i] << ' ';
        
    return 0;
}
