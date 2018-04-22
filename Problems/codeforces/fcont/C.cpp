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
    for(int i = 0; i < n; i++) {
        if (tp <= 0)
            break;
            
        int vj;
        if (i != 0)
            vj = tp/k + (tp%k);
        else
            vj = tp/k + (tp%k +1);
            

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
