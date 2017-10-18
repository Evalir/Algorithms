#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> zed(N, 0);
  vector<int> el;

  for(int i = 0; i < N; i++) {
    int x;
    cin >> x;
    el.push_back(x);
  }

  int acc = 0;
  int check = 0;
  bool match = false;

  while (check != el.size()) {
    acc++;
    for(int i = 0; i < el.size(); i++) {
      if(zed[i] != el[i]) {
        zed[i] += 1;
        //cout << "ZED " << zed[i] << " EL " << el[i] << endl;
      }
    }

    for (int i = 0; i < el.size(); i++) {
      if (zed[i] == el[i]) {
        //cout << "Hey!" << endl;
        check++;
      }
      if (check == N) break;

    }
    
    if (check == N) match = true;
    else check = 0;
  }

  cout << acc << endl;
}
