#include <iostream>
using namespace std;


#define SIZE 10

class stack{
  char stck[SIZE];
  int tos;
public:
  void init();
  void push(char ch);
  char pop();
};

void stack::init(){
  tos = 0;
}

void stack::push(char ch){
  if(tos == SIZE){
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
  stack st1, st2;
  st1.init();
  st2.init();
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

