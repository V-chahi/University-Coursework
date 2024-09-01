
#include <iostream>

using namespace std;

class Car{

private:
  string name;
  string model_name;

public:
  Car() {
    name = "bering";
    model_name = "tafa";
  }

  Car(string a, string b) {
    name = a;
    model_name = b;
  }

  ~Car() {}

  void set_model_name(string a) { model_name = a; }
  string get_name() { return name; }
  string get_model_name() { return model_name; }
  void print() { cout << name << " -> " << model_name << endl; }

};

int main() {

  Car a;
  a.print();
  Car b("Ford", "Ford XXX");
  b.print();
  b.set_model_name("Ford YYY");
  b.print();

return 0;
}
