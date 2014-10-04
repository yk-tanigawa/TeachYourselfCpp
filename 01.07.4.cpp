#include <iostream>
#include <thread>

using namespace std;

void sleep(int i);
void sleep(char *c);

int main()
{
  cout << "sleep(10) start\n";
  sleep(10);
  cout << "sleep(10) end\n";
  cout << "sleep(\"10\") start\n";
  sleep((char *)"10");
  cout << "sleep(\"10\") end\n";
  return 0;
}

void sleep(int i)
{
  std::this_thread::sleep_for(std::chrono::seconds(i));
  return;
}

void sleep(char *c)
{
  sleep(atoi(c));
  return;
}


/*
 * I used a library function "sleep_for",
 * which is explained in the following website:
 * https://sites.google.com/site/cpprefjp/reference/thread/this_thread/sleep_for
 * 
 */
