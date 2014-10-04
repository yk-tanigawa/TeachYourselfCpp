#include <iostream>
using namespace std;
#define SIZE 80

class myclass{
  char *name;
  char *addr;
public:
  int store(char *name, char *addr);
  int display();
  int destroy();
};

int main(){
  myclass c;
  char name[SIZE], addr[SIZE];
  strcpy(name, "James");
  strcpy(addr, "final frontier");
  c.store(name, addr);
  c.display();
  c.destroy();
  return 0;
}

int myclass::store(char *n, char *a){
  name = new char [strlen(n)];
  strcpy(name, n);
  addr = new char [strlen(a)];
  strcpy(addr, a);
  return 0;
}

int myclass::display(){
  cout << name << "\n";
  cout << addr << "\n";
  return 0;
}

int myclass::destroy(){
  delete name;
  delete addr;
  return 0;
}
