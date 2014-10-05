#include <iostream>
#include <cmath>
using namespace std;

class area_cl{
  double width;
  double height;
public:
  double get_w(){return width;}
  double get_h(){return height;}
  void show_area(double a, char *c){
    cout << c << a << "\n";
  }
  area_cl(double w, double h){
    width = w;  height = h;
  }
};

class rectangle : public area_cl{
public:
  void area(){
    return show_area(get_w() * get_h(), (char *)"rectangle :");
  }
  rectangle(double w, double h) : area_cl(w, h){}
};

class isosceles : public area_cl{
public:
  void area(){
    return show_area(0.5 * get_w() * get_h(),
		     (char *)"isosceles :");
  }
  isosceles(double w, double h) : area_cl(w, h){}
};

class cylinder : public area_cl{
  double radius(){return 0.5 * get_w();};
  double area_calc(){
    return 2.0 * M_PI * radius() * radius() +
      M_PI * get_w() * get_h();
  }
public:
  void area(){
    return show_area(area_calc(), (char *)"cylinder  :");
  }
  cylinder(double w, double h) : area_cl(w, h){}
};


int main(){
  rectangle a(1.0, 1.0);
  isosceles b(1.0, 1.0);
  cylinder  c(1.0, 1.0);
  a.area();
  b.area();
  c.area();
  return 0;
}
