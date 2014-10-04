#include <iostream>
#include <ctime>
#include <thread>

using namespace std;

class stopwatch{
  clock_t begin, end;
public:
  stopwatch();
  ~stopwatch();
  clock_t show();
  clock_t start();
  clock_t stop();
};


int main(){
  stopwatch sw;
  sw.start();
  std::this_thread::sleep_for(std::chrono::seconds(10));  
  sw.stop();
  sw.show();
  return 0;
}

stopwatch::stopwatch(){
  begin = end = 0;
  return;
}

stopwatch::~stopwatch(){
  show();
  return;
}

clock_t stopwatch::show(){
  double time = (double)(end - begin)/CLOCKS_PER_SEC;
  cout << "経過時間は" << time << "秒でした\n";
  return end - begin;
}

clock_t stopwatch::start(){
  begin = clock();
  return begin;
}

clock_t stopwatch::stop(){
  end = clock();
  return end;
}
