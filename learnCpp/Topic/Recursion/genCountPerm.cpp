// Compiled with: g++ -Wall -std=c++14 -pthread

#include <iostream>
#include <vector>

using namespace std;

// devuelve una lista de permutaciones
vector<vector<int> > generateAllPermutations(vector<int> numbers) {
    vector<vector<int> > ret;
    
    if(numbers.size() == 0){
        vector<int> empty;
        ret.push_back(empty);
        return ret;
    }
    
    for(int i = 0; i < numbers.size(); i++) {
        int v = numbers[i];
        vector<int> remaining = numbers;
        remaining.erase(remaining.begin() + i);
        
        vector<vector<int> > subPermutations = generateAllPermutations(remaining);

        for(vector<int> subPermutation : subPermutations) {
            subPermutation.insert(subPermutation.begin(), v);

        }
    }
    return ret;
}

int countPermutations(vector<int> numbers) {
    int counter = 0;
    
    if(numbers.size() == 0){
        return 1;
    }
    for(int i = 0; i < numbers.size(); i++) {
        int v = numbers[i];
        vector<int> remaining = numbers;
        remaining.erase(remaining.begin() + i);
        
        int subPermutations = countPermutations(remaining);
        counter += subPermutations;
    }
    return counter;
}

int recurseSum(vector<int> nums, int idx) {
    int addArr = 0;
    if (idx == 0) {
        return addArr;
    }

    addArr = nums[idx] + recurseSum(nums, idx-1);

    return addArr;

}

int cPWithVector(vector<int> nums, int size) {
    int counter = 1;

    if (nums.size() == 0) {
        return 1;
    }
    vector<int> remaining = nums;
    remaining.erase(remaining.begin());

    counter = size * cPWithVector(remaining, remaining.size());

    return counter;

}

int main(){
    
    vector<int> n;
    n.push_back(1);
    n.push_back(2);
    n.push_back(3);
    //n.push_back(4);
    //n.push_back(5);
    // for(vector<int> permutation : generateAllPermutations(n)) {
    //     for(int v : permutation)
    //         cout << v << " ";
    //     cout << endl;
    // }
    cout << countPermutations(n) << endl;  
    //cout << recurseSum(n,n.size()) << endl;
    //cout << cPWithVector(n, n.size()) << endl;
    return 0;
}