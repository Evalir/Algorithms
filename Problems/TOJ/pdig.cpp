#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

void joa(int n) {
    
    if (n == 0) {
        cout << 10 << endl;
        return;
    }
    if (n < 10)
    {
        printf("%d", n);
        return;
    }
    int counter = 0;
    int arr[10000];
    for (int i=9; i>1; i--) {
        while (n%i == 0) {
            n = n/i;
            arr[counter] = i;
            counter++;
        }
    }

    if (n > 10) {
        cout << -1 << endl;
        return;
    }
 
    for (int i=counter-1; i>=0; i--) {
        cout << arr[i];
    }
}

int main() {
    int n;
    cin >> n;
    joa(n);
    return 0;
}
