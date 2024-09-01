#include <bits/stdc++.h>

using namespace std;

class Book {

  private:
    char *title;
    int pages;

  public:
  Book(const Book &b) {
    title = new char[30];
    strcpy(title, b.title);
    this->pages = b.pages;
  }

  Book(const char *t, int p) { strcpy(title, t), pages = p; }
  Book();
  Book(Book &b) {
    strcpy(title, b.title);
    pages = b.pages;
  }
  void print() { cout << title << pages; }

  // setter and getter methods omitted
};

int main() {

  Book ("banana", 880);
  b.print();
  Book a(b);
  a.print();
  return 0;
}
