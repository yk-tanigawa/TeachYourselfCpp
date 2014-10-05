#include <iostream>
using namespace std;

int myabs(int i);
long myabs(long l);
double myabs(double d);

int main(){
  int i = -1;
  long l = -1;
  double d = -1;
  cout << i << "abs: " << myabs(i) << "\n";
  cout << l << "abs: " << myabs(l) << "\n";
  cout << d << "abs: " << myabs(d) << "\n";
  return 0;
}

inline int myabs(int i){
  return  i > 0 ? i : - 1 * i;
}

inline long myabs(long l){
  return  l > 0 ? l : - 1 * l;
}

inline double myabs(double d){
  return  d > 0 ? d : - 1 * d;
}
