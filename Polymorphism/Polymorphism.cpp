#include <iostream>
#include <cmath>
// i am just creating a simple Hierarchical inheritance program, 
// as an example of Polymorphism
using namespace std;
const float PI = 3.1415927;
class Container {
 protected:
  float height;
  float width;
  float radius;
 public:
  void set_volume (float h, float w, float r) {
   height = h;
   width = w;
   radius = r;
  }
};
class Sphere: public Container {
 public:
  float volume() {
   float v = ((4/3) * PI * pow(radius, 3));
   return v;
  }
 
};
class Cylinder: public Container {
 public:
  float volume() {
   float v = PI * pow(radius, 2) * height;
   return v;
  }
};
int main()
 {

  Sphere sphere;
  Cylinder cylinder;
  Container *ptrContainer1 = &sphere;
  Container *ptrContainer2 = &cylinder;
  ptrContainer1 -> set_volume(33.53, 25.11, 0);
  ptrContainer2 -> set_volume(13, 15, 0);
  cout << sphere.volume() << endl;
  cout << cylinder.volume() << endl;
  }
