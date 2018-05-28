#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[510];
    for(int i = 1; i <= 500; i++) {
        arr[i] = (i*(i+1))/2;
        if (arr[i] == n) {
            cout << "YES" << endl;
            return 0;
        }
        if (arr[i] > n) {
            cout << "NO" << endl;
            return 0;
        }
    }
    
    return 0;
}