
#include <iostream>
#include<bits/stdc++.h>

using namespace std;

class Car {
protected:
  string brand;
  string model;
  int price;

public:
  void setbrand(string brand) { this->brand = brand; }
  void setmodel(string newmodel) { this->model = newmodel; }
  void setprice(int newprice) { this->price = newprice; }
  int getprice() { return price; }
  void print() {
    cout << " " << brand << " \n" << model << " \n" << price << endl;
  }

  ~Car() { cout << "destructor"; }
  Car(string n, string m, int p) {
    this->brand = n;
    this->model = m;
    this->price = p;
  }
  Car() {}
};


class Taxi : Car {

private:
  int passangers;

public:
  void setpass(int newpass) { passangers = newpass; }
  int getpass() { return passangers; }
  Taxi(string b, string m, int p, int pass) : Car(b, m, p) {
    passangers = pass;
  }
  void print1() {
    cout << " " << brand << " \n" << model << " \n" << price << endl;
    cout << passangers;
  }
};


int main() {

  Car c;
  c.setbrand("Benz");
  c.setmodel("latest");
  c.setprice(98728676);
  c.print();
  Car x("xxxx", "yyyy", 8);
  x.print();
  Taxi t("mmmm", "nnnn", 19, 7);
  t.print1();

  return 0;
}
