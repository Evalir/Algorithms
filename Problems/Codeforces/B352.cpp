#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include <set>
using namespace std;

struct xa {
  int li;
  int dif = 0;
  bool isf = 0;
  bool ivs = 0;
};
int main() {
    int n, ans = 0;
    cin >> n;
    vector<int> a;
    vector<xa> qq((int)1e5+10);
    
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for(int i = 0; i < n; i++) {
        
        //si no lo he visto
        if(!qq[a[i]].isf) {
            qq[a[i]].isf = true;
            qq[a[i]].ivs = true;
            qq[a[i]].li = i;
            //cerr <<  a[i] << " is now valid" << endl;
        }
        else {
            if (qq[a[i]].dif == 0) {
                qq[a[i]].dif = abs(i-qq[a[i]].li);
                qq[a[i]].li = i;
                qq[a[i]].ivs = true;
                //cerr <<  a[i] << " second time, diff " << qq[a[i]].dif << endl;
            }
            else {
                int cdif = abs(i-qq[a[i]].li);
                if (cdif != qq[a[i]].dif) {
                    //cerr <<  a[i] << " now false " << qq[a[i]].dif << " vs "<< cdif << endl;
                    qq[a[i]].ivs = false;
                    
                }
                else {
                    //cerr << a[i] << " hold " << endl;
                    qq[a[i]].li = i;
                }
            }
        }
    }
    for(int i = 0; i < (int)1e5+2; i++)
        if(qq[i].ivs)
            ans++;
    cout << ans << endl;
    for(int i = 0; i < (int)1e5+2; i++) {
        if (qq[i].ivs) {
            cout << i << ' ' <<  qq[i].dif << endl;
        }
    }
    
    return 0;
}
