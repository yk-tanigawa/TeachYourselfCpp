#include <iostream>
using namespace std;


int gcd(int a, int b){
  if(!b) return a;
  return gcd(b, a%b);
}

int main()
{
  int a, b, c;
  cout << "2つの整数を入力:";
  cin  >> a >> b;
  c = gcd(a, b);
  cout << "最大公約数は " << c << "\n";
  return 0;
}
