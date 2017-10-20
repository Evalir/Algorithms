//Problem A580 from codeforces
//by evalir.io
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int best = 0;
  int counter = 0;
  int n;
  long sub;
  bool firstelement = true;
  vector<int> nums;

  cin >> n;
  //read sequence
  for (int i = 0; i < n; i++) {
    cin >> sub;
    nums.push_back(sub);
  }

  //find maximum non-decreasing subsegment
  //for a subsegment to not be non-decreasing it has to either contain equal or arising numbers.
  for (int i = 0; i < nums.size() - 1; i++) {

    if (nums[i+1] >= nums[i]) {
      counter++;
      }

    if (best < counter) best = counter;
    //  cout << "CURRENT BEST: " << best << " AT I: "  << i << endl;
    if (nums[i+1] < nums[i]) {
      counter = 0;
      }
    }

  cout << best+1 << endl;
} //end of main
