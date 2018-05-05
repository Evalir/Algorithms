#include <vector>
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

struct lead {
  int po, we;  
};

vector<lead> leads(100);
int memo[1000][1000];
int n;
int solve(int i, int capacity) {
    int res;
    if (i < 0 || capacity <= 0)
        return 0;
    if (memo[i][capacity] != -1)
        return memo[i][capacity];
    if (leads[i].we > capacity)
        res = solve(i-1, capacity);
    if (leads[i].we <= capacity) {
        int res1 = leads[i].po + solve(i-1, capacity-leads[i].we);
		//cerr << res1 << " is " << endl;
		int res2 = solve(i-1, capacity);
		//cerr << res2 << " is " << endl;
		res = max(res1, res2);
    }
    memo[i][capacity] = res;
    return res;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        leads.clear();
        for(int i = 0; i < 1000; i++)
            for(int j = 0; j < 1000; j++)
                memo[i][j] = -1;
        cin >> n;
        for(int i = 0; i < n; i++)
            cin >> leads[i].po >> leads[i].we;
        int k, r;
        cin >> k >> r;
        int ans = solve(n-1,k);
        if (ans >= r)
            cout << "Missao completada com sucesso" << endl;
        else
            cout << "Falha na missao" << endl;
    }
    
    return 0;
}
