/*
CH-230-A
A10_P9.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <iostream>
#include <cstring>  

using namespace std;



class NaiveString {
private:
	char *str;
public:
	NaiveString(const char*);
	NaiveString(const NaiveString&); 
	void update(char, char);
	void print();
};

NaiveString::NaiveString(const char* t) {
    cout<<" Constructor was called"<<endl;
	str = new char[strlen(t) + 1];
	strcpy(str, t);
}



NaiveString::NaiveString(const NaiveString& src) {
    cout<<"Copy constructor was called"<<endl;
	str = new char[strlen(src.str) + 1];
	strcpy(str, src.str);
	
}


void NaiveString::update(char oldchar, char newchar) {
    cout<<"update method was called"<<endl;
	unsigned int i;
	for (i = 0; i < strlen(str); i++) 
		if (str[i] == oldchar)
			str[i] = newchar;
}

void NaiveString::print() {
	cout << str << endl;
}

void funcByVal(NaiveString s) {
	cout << "funcbyval() was called" << endl;
	s.update('B', 'C');
	s.print();
}


void funcByRef(NaiveString& s){
    cout << "funcByRef() was called" << endl;
	s.update('B', 'C');
	s.print();
}

int main(int argc, char** argv)
{
	NaiveString a("aBcBdB");
    NaiveString b = a;


    cout<<"a: ";
	a.print();

    cout<<"b: ";
    b.print();

    funcByVal(a);

    funcByRef(b);

    cout<<"a: ";
	a.print();
    cout<<"b: ";
	b.print();
}