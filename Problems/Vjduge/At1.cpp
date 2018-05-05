#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int freq[100];
    for(int i = 0; i < 3; i++) {
        int x;
        cin >> x;
        freq[x]++;
    }
    if (freq[5] == 2 && freq[7] == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
        
    return 0;
    
}
