#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <bitset>
#include <list>
#include <string>
#include <sstream>
#define INF (int)1e9
#define pb push_back
#define EPS 1e-9
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626
#define READALL(vec) for(int i = 0; i < N; i++){int x; cin >> x; (vec).pb(x);}
using namespace std;
typedef long long llong;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef vector<long long> VLL;
typedef pair<int, int> ii;
typedef vector<vector<ii> > Graph;
typedef map<int,int> FREQ;
//*********************
//NUMBER THEORY
//*********************

//Sieve
bool sieve(int n, bool prime[]) {
   prime[n]; 
   for(int i = 0; i <= n; i++) { prime[i] = true; }
   prime[0]=false;
   prime[1]=false;
   int m= sqrt(n);

   for (int i=2; i<=m; i++)
      if (prime[i])
         for (int k=i*i; k<=n; k+=i)
            prime[k]=false;

   return prime;
} 

//GCD
int GCD(int a, int b) {
   if (b==0) return a;
   return GCD(b,a%b);
}

int LCM(int a, int b) {
   return b*a/GCD(a,b);
}

int toDecimal(int n, int b) {
   int result=0;
   int multiplier=1;
      
   while(n>0)
   {
      result+=n%10*multiplier;
      multiplier*=b;
      n/=10;
   }
      
   return result;
}

int fromDecimal(int n, int b) {
   int result=0;
   int multiplier=1;
      
   while(n>0)
   {
      result+=n%b*multiplier;
      multiplier*=10;
      n/=b;
   }
      
   return result;
}





int main(){
    
}