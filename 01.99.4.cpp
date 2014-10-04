#include <iostream>
using namespace std;

#define SIZE 80

int rev_str(const char *s1, char *s2);
int rev_str(char *s1);

int main(){
  char s1[SIZE], s2[SIZE];
  strcpy(s1, "hello");
  rev_str(s1, s2);
  rev_str(s1);
  cout << "s1 : " << s1 << "\n";
  cout << "s2 : " << s2 << "\n";
  return 0;
}

int rev_str(const char *s1, char *s2){
  strcpy(s2, s1);
  return rev_str(s2);
}

int rev_str(char *s1){
  int len = strlen(s1);
  for(int i = 0; i < len / 2; i++){
    char temp = s1[i];
    s1[i] = s1[len - 1 - i];
    s1[len - 1 - i] = temp;
  }
  return len;
}
