#include <iostream>

using namespace std;

char   min(char c,   char d);
int    min(int i,    int j);
double min(double f, double g);

int main()
{
  cout << "min(a, b)     = " << min('a', 'b') << "\n";
  cout << "min(1, 2)     = " << min( 1,   2 ) << "\n";
  cout << "min(0.1, 0.2) = " << min(0.1, 0.2) << "\n";
  return 0;
}

char min(char c, char d)
{
  return ((c < d) ? c : d);
}

int min(int i, int j)
{
  return ((i < j) ? i : j);
}

double min(double f, double g)
{
  return ((f < g) ? f : g);
}
