#include <iostream>
using namespace std;

class box{
  long double x, y, z;
public:
  box(long double a, long double b, long double c);
  void vol();
};

box::box(long double a, long double b, long double c){
  x = a; y = b; z = c;
  return;
}

void box::vol(){
  cout << "the volume of this object is "
       << x * y * z << "\n";
  return;
}

int main(){
  box b(1.0, 2.0, 4.0);
  b.vol();
  return 0;
}

