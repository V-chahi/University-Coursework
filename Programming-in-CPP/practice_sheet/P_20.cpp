#include <cmath>
#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;


class Object3D {
private:
  string name;

public:
  Object3D() { name = "3d_object"; }
  Object3D(string a) { name = a; }
  virtual double volume() { return -1; }
};


class Sphere : public Object3D {
private:
  double r;

public:
  Sphere() : Object3D() {}
  Sphere(string a, double b) : Object3D(a) { r = b; }
  double volume() { return (4.0 / 3) * M_PI * r * r * r; }
};


class Cylinder : public Object3D {
private:
  double r;
  double l;

public:
  Cylinder() : Object3D() {}
  Cylinder(string a, double b, double c) : Object3D(a) {
    r = b;
    l = c;
  }
  double volume() { return M_PI * r * r * l; }
};


class RectPrism : public Object3D {
private:
  double w;
  double l;
  double h;

public:
  RectPrism() : Object3D() {}
  RectPrism(string a, double b, double c, double d) : Object3D(a) {
    w = b;
    l = c;
    h = d;
  }
  double volume() { return w * l * h; }
};


class Cube : public RectPrism {
private:
  double s;

public:
  Cube() : RectPrism() {}
  Cube(string a, double b) : RectPrism(a, b, b, b) { s = b; }
  double volume() { return s * s * s; }
};


int main(int argc, char *argv[]){

  Object3D *arr[5];
  arr[0] = new Sphere("sphere", 1.3);
  arr[1] = new RectPrism("rectprism", 2.0, 3.0, 4.0);
  arr[2] = new Cylinder("cylinder", 2.0, 1.3);
  arr[3] = new Cube("cube", 2.0);
  arr[4] = new RectPrism("rectprism2", 1.0, 2.0, 3.5);

  for (int i = 0; i < 5; i++)
    cout << arr[i]->volume() << endl;

  for (int i = 0; i < 5; i++)
    delete arr[i];

return 0;
}


