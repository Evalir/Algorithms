#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> seats(m,0);
    int minsum = 0;
    for(int i = 0; i < m; i++) {
        cin >> seats[i];
    }
    //get minsum
    int pns = n;
    vector<int> temp = seats;
    vector<int> temp2 = seats;
    sort(temp.begin(), temp.end());
    for(int i = 0; i < m; i++) {
        while(temp[i] > 0 && pns > 0) {
            minsum += temp[i];
            //cerr << "On temp[i] " << temp[i] << endl;
            temp[i]--;
            pns--;
        }
    }
    pns = n;
    int maxsum = 0;
    while(pns > 0) {
        int maxz = 0;
        int zi = 0;
        for(int i = 0; i < m; i++) {
            if (max(maxz, temp2[i]) == temp2[i]) {
                maxz = max(maxz, temp2[i]);
                zi = i;
            }
        }
        maxsum += temp2[zi];
        temp2[zi]--;
        pns--;
        
    }
    
    
    cout << maxsum << ' ' << minsum << endl;
    
    return 0;
}
