#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <set>
#include <map>
#include <queue>
using namespace std;
 

int countNumbersWith4(int n)
{
    
   if (n < 0)
      return 0;
 
   int d = log10(n);
   
   int *a = new int[d+1];
   a[0] = 0, a[1] = 1;
   for (int i=2; i<=d; i++)
      a[i] = a[i-1]*9 + ceil(pow(10,i-1));
 
   int p = ceil(pow(10, d));
 
   int msd = n/p;
 
   if (msd == 0)
      return (msd)*a[d] + (n%p) + 1;
 
   if (msd > 0)
      return (msd-1)*a[d] + p + countNumbersWith4(n%p);
 
   return (msd)*a[d] + countNumbersWith4(n%p);
}
