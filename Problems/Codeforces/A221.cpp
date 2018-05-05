#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n, 0);
    for(int i = n-1; i >= 0; i--) {
        if (i == 1)
            arr[i] = 1;
        else if (i == 0)
            arr[i] = n;
        else
            arr[i] = i;
        
    }
    //elephantSort(n-1, arr);
    for(int i = 0; i < n; i++) 
        cout << arr[i] << " ";

    return 0;
}
