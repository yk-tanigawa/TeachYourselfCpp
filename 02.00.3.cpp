#include <iostream>
#include <climits>
using namespace std;

int lotate(int i);
long lotate(long l);

int main(){
  int i = INT_MAX;
  long l = LONG_MAX;
  cout << "original :" << i << "\n" <<
    " rotated :" << lotate(i) << "\n";
  cout << "original :" << l << "\n" <<
    " rotated :" << lotate(l) << "\n";
  return 0;
}

int lotate(int i){
  int x = i >> (sizeof(int) * 8 - 1);
  i = i << 1;
  i += x;
  return i;
}

long lotate(long l){
  long x = (l >> (sizeof(long) * 8 - 1));
  l = l << 1;
  l += x;
  return l;
}
