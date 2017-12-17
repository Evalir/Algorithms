#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <algorithm>
#include <bitset>
#include <list>
#include <string>
#define INF (int)1e9
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

int main(){
    int N, Budget, NHotels, Weeks;
    while (cin >> N >> Budget >> NHotels >> Weeks) {
      int hotelPrice;
      bool canGetIn = false;
      int minprice = INF;
      for(int i = 0; i < NHotels; i++) {
        //readhotel price
        cin >> hotelPrice;
        VI bedWeek;
        //read beds per weeks
        for(int j = 0; j < Weeks; j++) {
          int x;
          cin >> x;
          bedWeek.push_back(x);
          //cout << "PUSHED " << x << " IN" << endl;
        }

        //now iterate over beds and solve
        for(int j = 0; j < bedWeek.size(); j++) {
          if (bedWeek[j] < N) continue;
          else if (bedWeek[j] >= N && N * hotelPrice > Budget) continue;
          else if (bedWeek[j] >= N && N * hotelPrice <= Budget) {
            minprice = min(minprice, N * hotelPrice);
            canGetIn = 1;
          }
        }
      }

      if (canGetIn) cout << minprice << endl;
      else cout << "stay home" << endl;
    }

    return 0;
}
