#include <iostream>
#include <thread>
using namespace std;

class dice{
  time_t seed;
public:
  dice(){
    seed = time(NULL);
    srand((unsigned int) seed);
  }
  void roll(){
    cout << rand() << "\n";
  }
};

int main(){
  dice a;
  std::this_thread::sleep_for(std::chrono::seconds(1));
  dice b;
  a.roll();
  b.roll();
  a.roll();
  b.roll();
  return 0;
}
