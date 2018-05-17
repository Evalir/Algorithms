#include <iostream>
using namespace std;

int main() {
    long long n,m,a;
    cin >> n >> m >> a;
    
    long long sq_x = n/a;
    
    if (n%a != 0) {
        sq_x++;
    }
    
    long long sq_y = m/a;
    
    if (m % a != 0) {
        sq_y++;
    }
    
    long long ans = sq_x*sq_y;
    cout << ans << endl;
    
    return 0;
}
