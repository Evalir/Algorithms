#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    map<unsigned long long, int> pos;
    
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        pos[x] = i;
    }

    int Q;
    cin >> Q;
    unsigned long long ansV = 0;
    unsigned long long ansP = 0;
    for(int i = 0; i < Q; i++) {
        int quer;
        cin >> quer;
        ansV += pos[quer] + 1;
        ansP += N - pos[quer];
    }
    
    cout << ansV << ' ' << ansP << endl;
    
    
    return 0;
}
