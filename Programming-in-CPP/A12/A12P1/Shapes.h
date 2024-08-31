/*
CH-230-A
A12_P1.h
m.chahi@jacobs-university.de
*/

#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {		
	private:   				
		std::string name;  				 //shape name
	public:
		Shape(const std::string&); 		      // builds a shape name
		Shape();	
        ~Shape();					// empty shape
        std::string getName();
        void setName(std::string newname);
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints name  
};

class CenteredShape : public Shape { 		 // inherits from Shape
	private: 
		double x,y; 
	public:
		CenteredShape(const std::string&, double, double);  
		CenteredShape();
        ~CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	
        void setX(double newx);
        void setY(double newy);
        double getX();
        double getY();
};

class RegularPolygon : public CenteredShape {

	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
        ~RegularPolygon();
		RegularPolygon(const RegularPolygon&);
        void setEdgesNumber(int newedgesnumber);
        int getEdgesNumber();
};

class Circle : public CenteredShape { 
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
        ~Circle();
		Circle(const Circle&);
        void setRadius(double newradius);
        double getRadius();
};

class Hexagon : public RegularPolygon { 
	private:
		double side;
        std::string color;
	public:
		Hexagon(const std::string&, double, double, double, const std::string&);
		Hexagon();
        ~Hexagon();
		Hexagon(const Hexagon&);
        void setside(double newsetside);
        double getside();
        void setcolor(std::string newcolor);
        std::string getColor();
        double area();
        double perimeter();
};
    
#endif