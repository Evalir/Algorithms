#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;

unsigned long long fibo[1000];
void fib(int n)
{
  unsigned long long i;
 
  /* 0th and 1st number of the series are 0 and 1*/
  fibo[0] = 0;
  fibo[1] = 1;
 
  for (i = 2; i <= n; i++)
  {
      /* Add the previous 2 numbers in the series
         and store it */
      fibo[i] = fibo[i-1] + fibo[i-2];
  }

}

int main() {
    fib(70);
    unsigned long long n;
    cin >> n;
//    for(unsigned long long i = 0; i <= 40 ; i++) {
//        for(unsigned long long j = 0; j <= 40; j++) {
//            for(unsigned long long k = 0; k <= 40; k ++) {
//                if (fibo[i] + fibo[j] + fibo[k] == n) {
//                    cout << fibo[i] << ' ' << fibo[j] << ' ' << fibo[k] << endl;
//                    return 0;
//                }
//            }
//        }
        
//    }
    cout << 0 << ' ' << 0 << ' ' << n << endl;
    return 0;
    
}