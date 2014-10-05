#include <iostream>
#include <thread>
using namespace std;

class prompt{
  int count;
  char *prom;
  void save(int i){ count = i;}
  int get(){ return cout;}
public:
  prompt(char *c){
    prom = new char [strlen(c) + 1];
    int i;
    cout << c;
    fflush(stdout);
    cin >> i;
    save(i);
  }
  ~prompt(){ 
    for(int i = 0; i < count; i++){
      cout << "\a";
      fflush(stdout);
      std::this_thread::sleep_for(std::chrono::seconds(1));
    }
    delete prom; 
  }
};

int main(){
  prompt ob((char *)"please input a number :");
  return 0;
}
