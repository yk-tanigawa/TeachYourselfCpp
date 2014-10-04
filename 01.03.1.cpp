#include <iostream>
using namespace std;

int main(void)
{
  int i;
  int j;
  cout << "労働時間：";
  cin >> i;
  cout << "　時給　：";
  cin >> j;
  cout << "合計賃金は" << i * j << "です。\n";
  return 0;
}
