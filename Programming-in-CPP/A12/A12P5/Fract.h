/*
CH-230-A
A12_P5.cpp
m.chahi@jacobs-university.de
*/


#ifndef FRACt_H_
#define FRACT_H_

class Fraction {

private:						
	int num;					
	int den;					

	int lcm(int a, int b);
	int gcd(int a, int b);		

public:

	Fraction();					
	Fraction(int, int = 1); 	
	void print();				

					//overloading ALL operatorS FRIEND fct

	friend std::ostream& operator<<(std::ostream &os, const Fraction& f);

	friend std::istream& operator>>(std::istream& is, Fraction& f);

	friend Fraction operator*(Fraction& f1, Fraction& f2);

	friend Fraction operator/(Fraction& f1, Fraction& f2);

	friend Fraction operator+(Fraction& f1, Fraction& f2);

	friend Fraction operator-(Fraction& f1, Fraction& f2);

	Fraction& operator=(const Fraction&);

	friend bool operator<(Fraction& f1, Fraction& f2);

	friend bool operator>(Fraction& f1, Fraction& f2);
};


#endif /* FRACTION_H_ */