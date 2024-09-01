/*
CH-230-A
A12_P4.c
m.chahi@jacobs-university.de
*/


#ifndef FRACT_H_
#define FRACT_H_

class Fraction {

private:
						
	int num;					
	int den;					

	int gcd(int a, int b);		
	int lcm(int a, int b);

public:
	Fraction();					
	Fraction(int, int = 1); 	// setting valid denominator
								
	void print();				

				//overloading ALL operator

	friend std::ostream& operator<<(std::ostream &os, const Fraction& f);

	friend std::istream& operator>>(std::istream& is, Fraction& f);

	friend Fraction operator*(Fraction& f1, Fraction& f2);

	friend Fraction operator/(Fraction& f1, Fraction& f2);
};


#endif /* FRACT_H_ */