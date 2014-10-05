#include <iostream>
using namespace std;

struct stack{
  stack(int s);
  void push(char ch);
  char pop();
  ~stack();
private:
  char *stck;
  int size;
  int tos;
};

stack::stack(int s){
  size = s;
  tos = 0;
  stck = new char[size];
  return;
}

stack::~stack(){
  delete stck;
  return;
}

void stack::push(char ch){
  if(tos == size){
    cout << "stack is full\n";
  }else{
    stck[tos++] = ch;
  }
  return;
}

char stack::pop(){
  if(tos == 0){
    cout << "stack is empty\n";
    return 0;
  }else{
    return stck[--tos];
  }
}

int main(){
  stack st1(10), st2(5);
  st1.push('a');
  st2.push('x');
  st1.push('b');
  st2.push('y');
  st1.push('c');
  st2.push('z');
  for(int i = 0; i < 3; i++){ 
    cout << "stack 1 をpop :" << st1.pop() << "\n";
  }
  for(int i = 0; i < 3; i++){ 
    cout << "stack 2 をpop :" << st2.pop() << "\n";
  }

  return 0;
}

