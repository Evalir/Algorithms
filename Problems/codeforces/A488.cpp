#include <iostream>
using namespace std;

long ans = 0;
bool first = true;
long solve (long N, bool firstRun) {
    ans++;
  
    long newD = N;
    while(N > 0) {
      
        long digit = N % 10;
        N /= 10;
        if (digit == 8 && firstRun == false) {
            return ans;
            }
        }
    first = false;
    return solve(newD+1, first);
}

int main() {
    long N;
    cin >> N;

    if (abs(N) > (int)1e3) {
        int newN = abs(N % 100);
        
        int a = solve(newN, first);
        cout << a << endl;
    }
    else {
        int a = solve(N, first);
        cout << a << endl;
    }
  return 0;
}