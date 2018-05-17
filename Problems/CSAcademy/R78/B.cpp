#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <set>
#include <map>
#include <queue>
#define EPS (int)-1e9
using namespace std;

int main() {
    vector<long> points;
    int n;
    cin >> n;
    long maxdif = -1;
    pair<long,long> pt;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        points.push_back(x);
    }
    vector<long> p;
    if (points[1]-points[0] > points[n-1]-points[n-2]) {
           p = points;
           p.erase(p.begin());
           //get max dist
           for(int i = 0; i < n-1; i++) {
			   cerr << "i " << i << " pi " << p[i] << ' ' << p[i+1] << endl;
               if(p[i+1]-p[i] > maxdif) {
                    maxdif = p[i+1]-p[i];
                    pt.first = i;
                    pt.second = i+1;
               }
           }
           cerr << "max dist " << maxdif << endl;
           int np = (p[pt.first]+p[pt.second]) / 2;
           cerr << "inserting at " << np << endl;
           p.insert(p.begin() + pt.second, np);
           maxdif = -1;
           for(int i = 0 ; i < p.size()-1; i++) {
                if(p[i+1]-p[i] > maxdif) {
                    maxdif = p[i+1]-p[i];
                    pt.first = i;
                    pt.second = i+1;
               }
           }
           for(auto x : p)
			cout << x << " ";
		   
		   cout << endl;
           cout << maxdif << endl;
    }
    else {
		p = points;
		p.erase(p.begin()+n-1);
		 for(int i = 0; i < p.size(); i++) {
			   cerr << "i " << i << " pi " << p[i] << ' ' << p[i+1] << endl;
               if(p[i+1]-p[i] > maxdif) {
                    maxdif = p[i+1]-p[i];
                    cerr << "at " << i << " dist is " << maxdif << endl;
                    pt.first = i;
                    pt.second = i+1;
               }
           }
           cerr << "max dist " << maxdif << endl;
           long np = (p[pt.first]+p[pt.second]) / 2;
           cerr << "inserting at " << np << endl;
           p.insert(p.begin() + pt.second, np);
           maxdif = -1;
           for(int i = 0 ; i < p.size(); i++) {
                if(p[i+1]-p[i] > maxdif) {
                    maxdif = p[i+1]-p[i];
                    pt.first = i;
                    pt.second = i+1;
               }
           }
           for(auto x : p)
			cout << x << " ";
		   
		   cout << endl;
           cout << maxdif << endl;
    }
    return 0;
}
