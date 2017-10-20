#include <iostream>
#include <vector>
#include <set>
using namespace std;

bool isPrime(int n) {
  int i, count=0;

  if(n==1) return false;
  if(n==2) return true;
  if(n%2==0) return false;

  for(i=1;i<=n;i++) {
    if(n%i==0) count++;
    }

  if(count==2) return true;
  else return false;
}

int main() {

  int N, K, Z;
  cin >> N >> K;
  int besto = 1, mostp = 0;
  bool tie = false;
  multiset<int> winners;
  int counter = 0;
  for (int i = 0; i < N; i++) {

      counter++;
      int primes = 0;

      for (int j = 0; j < K; j++) {
        cin >> Z;
        if (isPrime(Z)){
           primes++;
           //cout << "IS PRIME" << Z << endl;
         }
      }

      winners.insert(primes);

      if (mostp < primes) {
        besto = counter;
        mostp = primes;

        primes = 0;
      }

      }


      //cout << winners.count(3) << endl;
      if (winners.count(mostp) > 1) tie = true;

    if (tie == false) cout << "Object " << besto << " wins with " << mostp << " rare characteristics" << endl;
    else cout << "No winner" << endl;
    return 0;
  }
