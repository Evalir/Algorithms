//taken from http://codingwithrajarshi.blogspot.com/2018/05/trees-euler-tours.html
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;

int v[1010];
int st[1010]; //startime
//int et[1010]; // <-> endtime
int t = 1;
vector<vector<int> > g(1010);

void dfs(int u) {
    v[u] = true;
    st[t] = u;
    ++t;
    for(int i : g[u])
        if (!v[i])
            dfs(i);
    et[t] = u;
}

int main() {
    g[1].push_back(5);
    g[5].push_back(4);
    g[5].push_back(7);
    g[1].push_back(6);
    g[6].push_back(3);
    g[6].push_back(2);
    g[6].push_back(8);
    dfs(1);
    cout << "euler arr" << endl;
    for(int i = 1; i <= 8; i++)
        cout << i << ' ';
    cout << endl;
    for(int i = 1; i <= 8; i++)
        cout << st[i] << ' ';
    return 0;
}
