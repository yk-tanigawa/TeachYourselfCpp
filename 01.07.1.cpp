#include <iostream>
#include <cmath>
using namespace std;

int sroot(int i);
long sroot(long l);
double sroot(double f);

int main()
{
  int i = 4;
  long l = 4;
  double f = 4.0;
  cout<< "sroot(4)   = " << sroot(i) << "\n";
  cout<< "sroot(4L)  = " << sroot(l) << "\n";
  cout<< "sroot(4.0) = " << sroot(f) << "\n";
  return 0;
}

int sroot(int i)
{
  return sqrt(i);
}

long sroot(long l)
{
  return sqrt(l);
}

double sroot(double f)
{
  return sqrt(f);
}
