#include <iostream>
using namespace std;

#define SIZE 128

class card{
  char title[SIZE];
  char author[SIZE];
  int num;
public:
  void store(char *t, char *a, int n);
  void show();
};

void card::store(char *t, char *a, int n)
{
  strcpy(title, t);
  strcpy(author, a);
  num = n;
  return;
}

void card::show(void)
{
  cout << "title  :" << title << "\n";
  cout << "author :" << author << "\n";
  cout << "num    :" << num << "\n";
}

int main(void)
{
  card temp;
  temp.store((char *)"MBoC", (char *)"Newton", 1);
  temp.show();
  return 0;
}
