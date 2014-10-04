#include <iostream>
using namespace std;

class t_and_d{
  time_t time;
public:
  t_and_d(time_t t);
  ~t_and_d();
  void show();
};

int main(){
  t_and_d(time(NULL));
  return 0;
}

t_and_d::t_and_d(time_t t){
  time = t;
  return;
}

void t_and_d::show(){
  struct tm *date;
  date = localtime(&time);
  cout << asctime(date);
  return;
}

t_and_d::~t_and_d(){
  show();
  return;
}
