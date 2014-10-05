#include <iostream>
using namespace std;

class strtype{
  char *p;
  int len;
public:
  strtype(char *ptr){
    len = strlen(ptr);
    p = new char[len + 1];
    if(!p){perror("memory allocation"); exit(1);}
    strcpy(p, ptr);
  }
  ~strtype(){
    delete p;
  }
  void show(){
    cout << p << "\n";
    return;
  }
};

int main(){
  strtype s1((char *)"test"), s2((char *)"learning c++");
  s1.show();
  s2.show();
  return 0;
}
