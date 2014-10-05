#include <iostream>
using namespace std;

union ex_int{
  int i;
  short int s[2];
  char c[4];
  void exchange();
  void show();
  void show_bits();
  ex_int(int x);
  ex_int(short int x, short int y);
};

int main(){
  //  cout << sizeof(char) << sizeof(int) << sizeof(short int) << "\n";
  ex_int i(1<<16);
  i.show();
  i.show_bits();
  i.exchange();
  i.show();
  i.show_bits();
  return 0;
}

ex_int :: ex_int (int x){
  i = x;
  return;
}

ex_int :: ex_int (short int x, short int y){
  s[0] = x;
  s[1] = y;
  return;
}

void ex_int :: exchange(){
  short int temp = s[0];
  s[0] = s[1];
  s[1] = temp;
  return;
}

void ex_int :: show(){
  cout << i << "\n";
  return;
}

void ex_int :: show_bits(){
  for(int a = 0; a < sizeof(int); a++){
    cout << (int) c[a];
  }
  cout << "\n";
  return;
}
