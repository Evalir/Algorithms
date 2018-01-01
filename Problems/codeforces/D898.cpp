#include <iostream>
#include <vector>
#define READALL(vec) for(int i = 0; i < N; i++){int x; cin >> x; (vec).pb(x);}
#define DEBUG(x) cout << (x) << endl
#define pb push_back
using namespace std;
typedef vector<int> VI;

int main(){
    int N, M, K;
    cin >> N >> M >> K;
    VI clocks;
    READALL(clocks);
    int count = 0;
    int TO = 0;
    for(int i = 0; i < N; i++) {
        int Ccount = 1;
        for(int j = 0; j < N; j++) {
            if (abs(clocks[i] - clocks[j]) <= M && j != i && clocks[j] >= clocks[i]) {
                Ccount++;
                count = max(count, Ccount);
            }
        }
    }
    //DEBUG(count);
    if (count < K) cout << 0 << endl;
    else cout << count - (K-1) << endl;
    
    return 0;
}