#include <iostream>
using namespace std;

int main(){
    int n;
    int counter = 0;
    cin >> n;
    for(long long a = 0; a < n; a++) {
        for(long long b = a; b < n; b++) {
            long long c = a ^ b;
            if (b <= c && c <= n && a + b > c) {
                counter++;
            }
        }
    }

    cout << counter << endl;
    return 0;
}