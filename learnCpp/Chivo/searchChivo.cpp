//bserach and tersearch requires check function
bool check(int a) {
    //check depending on problem
}

int binary_search_simple(int lo, int hi) {
   int res = -1; // remains -1 if no argument is good
   while (lo <= hi) {
      int mid = lo + (hi - lo) / 2;
      bool chk = check(mid);
      cerr << "lo: " << lo << "  hi: " << hi << "  mid: " << mid << "  chk: " << chk << endl;
      if (chk) {
         hi = mid - 1;
         res = mid;     // if searching for last NO, move this line to else case  
      } else {
         lo = mid + 1;
      }
   }
   return res;
}

double ternary_search_simple(double lo, double hi) {
    double a= lo + (hi - lo) / 3.0;
    double b = lo + (hi - lo) * 2.0 / 3.0;
    double y_a = 0; //en realidad seria f(a), la evaluacion de la funcion en ese punto
    double y_b = 0; //ditto
    while (lo <= hi) {
        
    }
}