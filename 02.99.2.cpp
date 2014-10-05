#include <iostream>
using namespace std;

class feet_inch{
  double feet;
  double inch;
public:
  feet_inch(double feet){
    inch = 12 * feet;
    cout << inch << "\n";
  };
};


int main()
{
  feet_inch i(1);
  return 0;
}
