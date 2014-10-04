#include <iostream>
using namespace std;

/* 2つの整数を入力として受け取って，a^bを返すプログラム */

int fact(int base, unsigned int exp);
/* base^exp を返す関数 */

int main(){
  int base, exp;
  cin >> base >> exp;
  if(exp >= 0){
    cout << fact(base, (unsigned int)exp) << "\n";
  }else{
    cout << 1.0 / fact(base, (unsigned int)(-1 * exp)) << "\n";
  }
  return 0;
}

int fact(int base, unsigned int exp){
  if(exp == 0){
    if(exp == base){
      fprintf(stderr, "0 to the 0th power is undefined, but this program returns 0.\n");
    }
    return 1;
  }else if(exp == 1){
    return base;
  }else if(exp > 1){
    return base * fact(base, exp - 1);
  }else{
    return -1;
  }
}
