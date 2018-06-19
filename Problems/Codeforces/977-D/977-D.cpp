#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
using namespace std;
typedef unsigned long long ll;

vector<vector<ll> > adj;
map<ll,int> used;
vector<ll> seq;
int nvis = 0;
int n;

void backtrack(ll u) {
  
  if (nvis == n) {
    return;   
  }
   
  for(ll v : adj[u]) {
    if (used[v])
      continue;
    if (u % 3 == 0 && v == u/3) {
      used[v] = true;
      seq.push_back(v);
      ++nvis;
      backtrack(v);
      --nvis;
      used[v] = false;
      seq.pop_back(); 
    }
    if (v == u*2) {
      used[v] = true;
      seq.push_back(v);
      ++nvis;
      backtrack(v);
      --nvis;
      used[v] = false;
      seq.pop_back();
    }
  }
}

int main() {
  cin >> n;
  vector<ll> A(n);
  for(ll& i : A)
    cin >> i;
  adj.resize(n);
  for(int u = 0; u < A.size(); u++) {
    for(int v = 0; v < A.size(); v++) {
      if (u != v) {
        if (A[u] % 3 == 0 && A[v] == A[u]/3) {
            cerr << A[u] <<  " with3 " << A[v] << endl; 
            adj[u].push_back(v);
        }
        else if (A[v] == A[u]*2) {
         cerr << A[u] << " with2 " << A[v] << endl;
          adj[u].push_back(v); 

        }
      }
    }
  }
  
  for(int i = 0; i < A.size(); i++) {
    used[A[i]] = true;
    nvis++;
    backtrack(A[i]);
    if (nvis == n) {
      break;
    }
    used[A[i]] = false;
    nvis--;

  }
  return 0;
}
