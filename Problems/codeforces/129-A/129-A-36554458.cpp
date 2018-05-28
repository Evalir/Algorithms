#include <iostream>
using namespace std;

int main() {
    int N, sum = 0;
    cin >> N;
    int bags[N];
    for(int i = 0; i < N; i++) {
        cin >> bags[i];
        sum += bags[i];
    }
    int ans = 0;
    for(int i = 0; i < N; i++) {
        int rem = sum - bags[i];
        if (rem % 2 == 0)
            ans++;
        else
            continue;
        }
    
    cout << ans << endl;
    return 0;

}