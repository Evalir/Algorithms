//Fibonacci Series using Dynamic Programming
#include<stdio.h>
#include <string>
#include <iostream>
using namespace std;
int n;
int f[10000];

void fibGen(int n)
{
  f[0] = 0;
  f[1] = 1;
  for (int i = 2; i <= n; i++)
  {
      f[i] = f[i-1] + f[i-2];
  }

}
bool fs = 0;
int main () {
    cin >> n;
    fibGen(1010);
    string S = "";
    
    for(int i = 0; i < n; i++) {
        for(int j = 1; j <= 1000; j++) {
            if (f[j] == i+1) {
                S += 'O';
                fs = 1;
                break;
            }
            else {
                fs = 0;
                continue;
            }
        }

        if (fs == 0) S += 'o';
    }

    cout << S << endl;
  
  return 0;
}