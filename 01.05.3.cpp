#include <iostream>
using namespace std;

#define SIZE 100

class cqueue{
  int i[SIZE];
  int top;
  int bottom;
public:
  void init();
  int enqueue(int n);
  int dequeue();
};

void cqueue::init()
{
  top = 0;
  bottom = 0;
  return;
}

int cqueue::enqueue(int n)
{
  if (((bottom - top) % 100) < SIZE){
    i[bottom] = n;
    bottom = (bottom + 1) % SIZE;
    return 0;
  }else{
    cout << "cyclic queue is full\n";
    return -1;
  }
}

int cqueue::dequeue()
{
  if (((bottom - top) % 100) > 0){
    int n = i[top];
    top = (top + 1) % SIZE;
    return n;
  }else{
    cout << "cyclic queue is empty\n";
    return -1;
  }
}

int main (void)
{
  cqueue temp;
  temp.init();
  temp.enqueue(1);
  temp.enqueue(2);
  temp.enqueue(3);
  cout << temp.dequeue() << "\n";
  cout << temp.dequeue() << "\n";
  cout << temp.dequeue() << "\n";
  return 0;
}
