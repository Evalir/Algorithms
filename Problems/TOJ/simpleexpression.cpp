#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    vector<int> nums(3,0);
    for(int i = 0; i < 3; i++)
        cin >> nums[i];
    sort(nums.begin(), nums.end());
    int ans = min(nums[0]-nums[1]-nums[2],nums[0]-(nums[1]*nums[2]));
    cout << ans << endl;
    
}
