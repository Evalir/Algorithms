#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
using namespace std;
#define AVAILABLE 0
#define USED 1
#define DEAD 2

template<class T>
struct MyDict {

  int hashTableSize;
  int currSZ;
  vector<T> hashTable;
  vector<int> insertedHere;
  function<int(T, int)> hashFn; 

  MyDict(function<int(T,int)> hashFn) : hashFn(hashFn) {
    hashTableSize = 100;
    currSZ = 0;
    hashTable = vector<T>(hashTableSize);
    insertedHere = vector<int>(hashTableSize, AVAILABLE);
  } 
  
  void insert(T val) {
    if (currSZ == hashTableSize)
        enlarge();
    int idx = hashFn(val, hashTableSize);
    while(insertedHere[idx]) {
      cerr << "idx " << idx << " used/dead" << endl; 
      idx = (idx + 1) % hashTableSize;
    }
    cerr << "insert at " << idx << endl;
    hashTable[idx] = val;
    insertedHere[idx] = USED;
    ++currSZ; 
  }

  void enlarge() {
    hashTableSize *= 2;
    hashTable.resize(hashTableSize);
    insertedHere.resize(hashTableSize);
  }

  bool exists(T val) {
    int idx = hashFn(val,hashTableSize);
    int startIdx = idx;
    while(insertedHere[idx]) {
      if (hashTable[idx] == val)
          return true;
      idx = (idx+1) % hashTableSize;  
    }
    return false;
  }
  
  void remove(T val) {
    bool canRemove = exists(val);
    if (canRemove) {
      int idx = hashFn(val, hashTableSize);
      while(hashTable[idx] != val)
        idx = (idx+1) % hashTableSize;
      insertedHere[idx] = DEAD;
      --currSZ;
    }
  }
  
  int size() {
    return currSZ;
  }

  bool isEmpty() {
    return !currSZ;
  }

};

int hashFunc(int val, int sz) {
  int n = val;
  int acc = 0;
  while(n > 0) {
    acc += n % 10;
    n /= 10;
  }
  //cerr << "idx " << acc%sz << endl;
  return acc % sz;

}

int main() {
 
  MyDict<int> K(hashFunc);
  K.insert(10);
  K.insert(10);
  cout << K.exists(10) << endl;
  cout << K.exists(13) << endl;
  cout << K.size() << endl;
  cout << K.isEmpty() << endl;
  K.remove(10);
  cout << K.size() << endl;
  K.insert(10);
  
  return 0;
};
