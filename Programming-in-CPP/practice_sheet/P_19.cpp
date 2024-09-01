#include <fstream>
#include <iostream>
using namespace std;
class worker {
private:
  int id;
  string name;

public:
  worker(int newid, string newnam) { id = newid, name = newnam; }
  worker() {}
  ~worker() {}
  friend ostream &operator<<(ostream &out, worker &c) {
    out << c.id << endl;
    out << c.name << endl;
    return out; // dot foget the return hereeeee
  }
};
int main() {
  worker a(234, "John McEnroe");
  worker b(324, "Jack Nicholson");
  cout << a << b;
  ofstream output("compleks.txt", ios::app);
  output << a << endl;
  output << b << endl;
  return 0;
}
