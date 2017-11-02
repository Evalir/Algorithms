#include <iostream>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool satisfy(const vector<int>& freq) {
  for (int i = 0; i < (int) freq.size(); i++) {
     if (freq[i] <= 0)
        return false;
  }
  return true;
}

int main(int argc, char* argv[]) {
  string S;
  cin >> S;

  vector<int> freq(3, 0);

  int bestLen = 100000000;
  int bestL = 0, bestR = -1;

  const int N = S.size();
  for (int L = 0, R = -1; R < N; ) {
     for (R++; R < N; R++) {
        char c = S[R];
        freq[c-'a']++;
        if (satisfy(freq))
           break;
     }
     if (R >= N)
        break;

     for (; L <= R; ) {
        // update best interval
        if (R - L + 1 < bestLen) {
           bestLen = R - L + 1;
           bestL = L, bestR = R;
        }

        char c = S[L];
        freq[c-'a']--;
        L++;
        if (!satisfy(freq))
           break;
     }
  }

  cout << "best interval length is " << bestLen << endl;
  cout << "best interval starts at " << bestL << " and ends at " << bestR << endl;

  return 0;
}

/*
    Input: - aaaaaaabbbbaaaaccccccccccccccaccccbaaaaaaaaaaaacbbbbbbbbbbbbbbaa
*/