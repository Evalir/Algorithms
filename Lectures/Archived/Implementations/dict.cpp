#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;

template<class K, class V>
struct MyDict {
  
  int hashTableSize;
  int currSZ;
  
  vector<T> hashTable;
  vector<bool> insertedHere; 
  MyDict(function<int(T,int)> hashFn) : hashFn(hashFn) {
    hashTableSize = 100;
    int currSZ = 0;
    vector<T> hashTable(hashTableSize);
    vector<bool> insertedHere(hashTableSize);
  } 
  
  void insert(T param, T val) {
    if (currSZ == hashTableSize)
        enlarge();
    int idx = hashFn(param, hashTableSize);
    while(!insertedHere[idx]) {
      idx = (idx + 1) % hashTableSize;
    }
    hashTable[idx] = val;
    insertedHere[idx] = true;
    ++currSZ; 
  }

  void enlarge() {
    hashTableSize *= 2;
    hashTable.resize(hashTableSize);
    insertedHere.resize(hashTableSize);
  }
  
  




};

int main() {


}
