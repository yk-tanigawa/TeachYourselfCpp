#include <iostream>
using namespace std;

class line{
  int len;
public:
  line(int i){
    len = i;
    for(int j = 0; j < len; j++){ cout << "*";}
    cout << "\n";
  }
};

int main(){
  line l(10);
  return 0;
}
