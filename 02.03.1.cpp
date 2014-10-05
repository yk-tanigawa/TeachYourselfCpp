#include <iostream>
using namespace std;

class area_cl{
  double width;
  double height;
public:
  double get_w();
  double get_h();
  void show_area(double a);
  area_cl(double w, double h);
};

class rectangle : public area_cl{
public:
  void area();
  rectangle(double w, double h);
};

class isosceles : public area_cl{
public:
  void area();
  isosceles(double w, double h);
};

int main(){
  rectangle a(1.0, 1.0);
  isosceles b(1.0, 1.0);
  a.area();
  b.area();
  return 0;
}

area_cl::area_cl(double w, double h){
  width = w;
  height = h;
  return;
}

double area_cl::get_w(){
  return width;
}

double area_cl::get_h(){
  return height;
}

void area_cl::show_area(double a){
  cout << "area : " << a << "\n";
  return;
}

rectangle::rectangle(double w, double h) : area_cl(w, h){
  return; 
}

isosceles::isosceles(double w, double h) : area_cl(w, h){
  return; 
}

void rectangle::area(){
  cout << "rectangle ";
  return show_area(get_w() * get_h());
}

void isosceles::area(){
  cout << "isosceles ";
  return show_area(0.5 * get_w() * get_h());
}
