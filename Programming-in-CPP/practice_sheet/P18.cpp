
#include <iostream>
#include<bits/stdc++.h>
#include <runtime_error>

using namespace std;

class Complex : public runtime_error {

private:
  float real; // real part
  float imag; // imaginary part

public:
  Complex() : runtime_error("invalid") {}
  Complex(float newreal, float newimag);
  double magnitude();
  void print();
  void detreal(float realn) { real = realn; }
  void detrimg(float imgn) { imag = imgn; }
  float getre() { return real; }
  float getimg() { return imag; }
  friend ostream &operator<<(ostream &out,
                             const Complex &v);

  friend istream &operator>>(istream &in, Complex c){
    cout << "enter real";

    in >> c.real;
    if (c.real < 0) {
      throw Complex();
    }
    cout << "enter imag";
    in >> c.imag;
    return in;
  }

  Complex operator*(Complex &x){
    Complex res(this->real * x.real, this->imag * x.imag);
    return res;
  }

  Complex operator/(Complex &s){
    Complex res((this->real / s.real), (this->imag / s.imag));
    return res;
  }
};

ostream &operator<<(ostream &out, const Complex &v){ 
  if (v.imag != 0){
    out << noshowpos << v.real << showpos << v.imag << "i" << endl;
  } 
  else{
    out << noshowpos << v.real << endl;
  }
  return out; 
}

Complex::Complex(float newreal, float newimag){
  real = newreal;
  imag = newimag;
}

int main() {

  ofstream out("copleks.txt", ios::in);
  Complex c(2.3, 4.1);
  cout << c; // not out
  out << c;
  Complex x;
  try {
    cin >> x;
  } catch (Complex &e){ 
    cout << e.what();
    exit(1);
  }
  Complex b;
  cin >> b;
  cout << x * b;
  cout << x / b;
}
