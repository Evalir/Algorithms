#include <iostream>
#include <vector>
#define pb push_back
int maxop = 0;
#define READALL(vec) for(int i = 0; i < N; i++){int x; cin >> x; (vec).pb(x); if(x == 1) maxop++;}
using namespace std;
typedef vector<int> VI;

int main(){
    int N, minop = 0;
    vector<int> nums;
    cin >> N;
    READALL(nums);
    for(int i = 0; i < N; i++) {
        if (i == N-1) {
            if (nums[i] == 0) break;
            else if (nums[i] == 1) {
                minop++;
                break;
            }
        }
        if (nums[i] == 0) continue;
        else if (nums[i] == 1 && nums[i+1] == 1) {
            nums[i] = -1;
            nums[i+1] = -1;
            minop++;
        }
        else if (nums[i] == 1 && nums[i+1] == 0) {
            nums[i] = -1;
            minop++;
        }
    }

    cout << minop << " " << maxop << endl;

    return 0;
}