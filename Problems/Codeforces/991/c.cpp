~
~
~
~
~
~
~
~
"a.cpp" [New] 20L, 352C written
  1 #include <iostream>
  2 #include <vector>
  3 #include <cmath>
  4 #include <algorithm>
  5 #include <map>
  6 #include <set>
  7 using namespace std;
  8
  9 using ll = long long;
 10
 11 int main() {
 12   int a, b, c, n;
 13   cin >> a >> b >> c >> n;
 14   int x = a-c, y = b-c;
 15   if (x < 0 || y < 0 || x + y + c <= n-1 )
 16     cout << -1 << endl;
 17   else
 18     cout << (x+y+c)-n << endl;
 19   return 0;
 20 }
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
  1 #include <iostream>
  2 #include <vector>
  3 #include <cmath>
  4 #include <algorithm>
  5 #include <map>
  6 #include <set>
  7 using namespace std;
  8
  9 using ll = long long;
 10
 11 int main() {
 12   int a, b, c, n;
 13   cin >> a >> b >> c >> n;
 14   int x = a-c, y = b-c;
 15   if (x < 0 || y < 0 || x + y + c > n-1 )
 16     cout << -1 << endl;
 17   else
 18     cout << n-(x+y+c) << endl;
 19   return 0;
 20 }
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
~
:%w !pbcopy

Press ENTER or type command to continue
  750-A             884-B             937-B             992-B
189-A             281-A             439-A             507-A             625-B             757-A             888-A             938-A             992-C
199-A             282-A             439-B             509-A             630-A             758-A             888-B             938-B             A934.cpp



  1 #include <iostream>
  2 #include <vector>
  3 #include <cmath>
  4 #include <algorithm>
  5 #include <climits>
  6 using namespace std;
  7
  8 int main() {
  9   int n;
 10   cin >> n;
 11   vector<int> V(n);
 12   for(int& i : V)
 13     cin >> i;
 14   double av = 0.00;
 15   for(int& i : V)
 16     av += (double)i*1.00;
 17   av /= (double)n;
 18   if (av >= 4.5) {
 19      cout << 0 << endl;
 20      return 0;
 21   }
 22   sort(V.begin(), V.end());
 23   int ans = 0;
 24   for(int i = 0; i < V.size(); i++) {
 25     V[i] = 5;
 26     ++ans;
 27     av = 0;
 28     for(int j = 0; j < V.size(); j++) {
 29         av += (double)V[j]*1.00;
 30     }
 31     av /= (double)n;
 32     if (av >= 4.5) {
 33       cout << ans << endl;
 34       return 0;
 35     }
 36   }
 37   return 0;
 38
 39 }
~
~
~
~
~
:%w !pbcopy

Press ENTER or type command to continue
  1 #include <iostream>
  2 #include <vector>
  3 #include <cmath>
  4 #include <algorithm>
  5 #include <climits>
  6 using namespace std;
  7
  8 int main() {
  9   int n;
 10   cin >> n;
 11   vector<int> V(n);
 12   for(int& i : V)
 13     cin >> i;
 14   double av = 0.00;
 15   for(int& i : V)
 16     av += (double)i*1.00;
 17   av /= (double)n;
 18   if (av >= 4.5) {
 19      cout << 0 << endl;
 20      return 0;
 21   }
 22   sort(V.begin(), V.end());
 23   int ans = 0;
 24   for(int i = 0; i < V.size(); i++) {
 25     V[i] = 5;
 26     ++ans;
 27     av = 0;
 28     for(int j = 0; j < V.size(); j++) {
 29         av += (double)V[j]*1.00;
 30     }
 31     av /= (double)n;
 32     if (av >= 4.5) {
 33       cout << ans << endl;
 34       return 0;
 35     }
 36   }
 37   return 0;
 38
 39 }
~
~
~
~
~
:%w !pbcopy

Press ENTER or type command to continue
2-A               298-B             441-A             510-A             651-B             761-A             890-B             940-A             A934.exe
200-B             313-A             443-A             513-A             659-A



  1 #include <iostream>
  2 #include <vector>
  3 #include <cmath>
  4 #include <algorithm>
  5 //bserach and tersearch requires check function
  6     //check depending on problem
  7 }
  8
  9 int binary_search_simple(int lo, int hi) {
 10    int res = -1; // remains -1 if no argument is good
 11    while (lo <= hi) {
 12       int mid = lo + (hi - lo) / 2;
 13       bool chk = check(mid);
 14       cerr << "lo: " << lo << "  hi: " << hi << "  mid: " << mid << "  chk: " << chk     << endl;
 15       if (chk) {
 16          hi = mid - 1;
 17          res = mid;     // if searching for last NO, move this line to else case
 18       } else {
 19          lo = mid + 1;
 20       }
 21    }
 22    return res;
 23 }
 24
 25 double ternary_search_simple(double lo, double hi) {
 26     double a= lo + (hi - lo) / 3.0;
 27     double b = lo + (hi - lo) * 2.0 / 3.0;
 28     double y_a = 0; //en realidad seria f(a), la evaluacion de la funcion en ese pun    to
 29     double y_b = 0; //ditto
 30     while (lo <= hi) {
 31
 32     }
 33 }
~
~
~
~
~
~
~
~
~
ValueError: Still no compile flags, no completions yet./check depending on problem
}

int binary_search_simple(int lo, int hi) {
   int res = -1; // remains -1 if no argument is good
   while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      bool chk = check(mid);
      cerr << "lo: " << lo << "  hi: " << hi << "  mid: " << mid << "  chk: " << chk << endl;
      if (chk) {
         hi = mid - 1;
         res = mid;     // if searching for last NO, move this line to else case
      } else {
         lo = mid + 1;
      }
   }
   return res;
}

double ternary_search_simple(double lo, double hi) {
    double a= lo + (hi - lo) / 3.0;
    double b = lo + (hi - lo) * 2.0 / 3.0;
    double y_a = 0; //en realidad seria f(a), la evaluacion de la funcion en ese punto
    double y_b = 0; //ditto
    while (lo <= hi) {

    }
}
