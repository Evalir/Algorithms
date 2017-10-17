//Hackerearth problem last ocurrence

#include <cstdio>
#include <vector>
using namespace std;

int main() {
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++) {

    int a;
    scanf("%d", &a);
    vector<int> table(1000007, -1);
    vector<int> arr;

    //get values into arr and intialize table
    for(int i = 0; i < a; i++) {
      int ai;
      scanf("%d", &ai);
      arr.push_back(ai);
      table[ai] = i+1;
    }

    //read n of queries and process
    int q;
    scanf("%d", &q);
    for(int i = 0; i < q; i++) {
      int x;
      scanf("%d", &x);

      if (x < 1000007){
         printf("%d\n", table[x]);
       }
      else {
        printf("%d\n", -1);
      }

    }
  }

  return 0;
}
