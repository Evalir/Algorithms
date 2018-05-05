#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <cmath>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> people;
    int ans = 0;
    map<int, int> FREQ;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        people.push_back(x);
        FREQ[x]++;
    }
    int currfloor = 1;
    int tp = n;
    bool ifs = 1;
    for(int i = 0; i < n; i++) {
        int elc = 0;
        if (tp <= 0)
            break;
            
        int vj = 0;
        for(auto x : FREQ) {
            elc += x.second;
            if (elc >= k) {
                while (elc >= k) {
                    if ()
                    vj += 2;
                    elc -= k;
                }
            }
        }
        if (elc > 0) {
            while (elc > 0) {
                vj += 1;
                elc -= k;
            }
        }
        if (i != 0)
            vj--;
        cerr << "vj is: " << vj << endl;
        cerr << "tp is: " << tp << endl;
        cerr << "TIME FOR FLOOR " << people[i] << " :" << abs(people[i]-currfloor) * (vj) << endl;
        ans += abs(abs(people[i]-currfloor) * (vj));
        currfloor = people[i];
        for(auto x : FREQ) {
            if (x.first == currfloor)
                tp -= x.second;
                x.second = 0;
        } 
        
    }
    
    ans += people[people.size()-1] - 1;
    cout << ans << endl;
    
    
}
