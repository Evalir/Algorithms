#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <stack>
#include <queue>
#include <cmath>
#include <climits>
#include <algorithm>
#include <bitset>
#include <list>
#include <string>
#include <sstream>
#define INF (int)1e9
#define pb push_back
#define EPS 1e-9
#define all(a) (a).begin(), (a).end()
#define PI 3.1415926535897932384626
using namespace std;
typedef long long llong;
typedef unsigned long long ull;
typedef vector<int> VI;
typedef vector<VI> VII;
typedef map<int,int> FREQ;
typedef pair<int, int> ii;

int main(){
    int N;
    cin >> N;
    FREQ nums;
    for(int i = 0; i < N; i++) {
        int x;
        cin >> x;
        nums[x]++;
    }
    
    if (nums.find(2) == nums.end()) {cout << nums[1] / 3 << endl;}
    else if ((nums.find(1) == nums.end())) cout << 0 << endl;
    else if (nums[2] != 0 && (nums[1] > nums[2])) {
        int maxv = nums[2] + ((nums[1] - nums[2]) / 3);
        cout << maxv << endl;
        }
    else if (nums[1] != 0 && (nums[1] == nums[2])) cout << nums[2] << endl;
    else if (nums[1] != 0 && (nums[1] < nums[2])) cout << nums[1] << endl;
    
    return 0;
}