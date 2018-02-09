#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<long long> nums;

    for(int i = 0; i < 30; i++) {
        nums.push_back(2 << i);
    }

    for(int i = 0; i < nums.size(); i++) {
        cout << nums[i] << endl;
    }

    //cout << acc << endl;

    return 0;
}




