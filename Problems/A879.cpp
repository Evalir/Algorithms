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
#define INF (int)1e9;
using namespace std;
typedef long long llong;
typedef unsigned long long uint64;
typedef vector<int> VI;
typedef vector<VI> VII;

struct Doctor {
  int s, d;
};

int main() {

  int N;
  cin >> N;
  vector<Doctor> doctors;
  for(int i = 0; i < N; i++) {
    long long x, y;
    cin >> x >> y;
    Doctor d;
    d.s = x;
    d.d = y;
    doctors.push_back(d);
  }

  long long day = 0;

  for (int i = 0; i < doctors.size(); i++){
    int optday = 0;
    //vector<int> days;
    for(int j = 0; j < 100000000; j++) {
      if(optday > day) {
        day = optday;
        break;
      }

      optday = (doctors[i].s) + ((doctors[i].d) * (j));
      //cout << optday << " MULTIPLO BAJITO CON DIA "<< day << endl;
    }

  }

  cout << day << endl;

}