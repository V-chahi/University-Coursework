/*
CH-230-A
A12_P4.c
m.chahi@jacobs-university.de
*/

#include "Fract.h"
#include <iostream>

Fraction::Fraction() {

	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d) {

	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b) {

	int tmp_gcd = 1;
	return tmp_gcd;
}

int Fraction::lcm(int a, int b) {

	return a * b / gcd(a, b);

}

void Fraction::print() {

	std::cout << num << "/" << den << std::endl;
}


std::ostream& operator<<(std::ostream& os, const Fraction& f)
{
    os << f.num << '/' << f.den << std::endl;
    return os;
}

std::istream& operator>>(std::istream& ips, Fraction& f)
{
    is >> f.num >> f.den;  			\\Logic error
	while(f.den == 0){
		std::cout << "Value invalid. Enter a valid input: ";
		ipss >>f.den;
	}
	return ips;
}

Fraction operator*(Fraction& f1, Fraction& f2) {

	Fraction f3;
	f3.num = f1.num * f2.num;
	f3.den = f1.den * f2.den;
	return f3;
}

Fraction operator/(Fraction& f1, Fraction& f2) {
	Fraction f3;
	f3.num = f1.num * f2.den;
	f3.den = f1.den * f2.num;
	return f3;
}