/*
CH-230-A
A11_P6.c
Amine Chahi
m.chahi@jacobs-university.de
*/

#ifndef __SHAPES_H
#define __SHAPES_H

#include <string>

class Shape {			
	private:   				
		std::string name;   
	public:
		Shape(const std::string&);  
		Shape();					
		Shape(const Shape&);		
		void printName() const ;  	
                void setName(std::string newname);
                std::string getName();
};

class CenteredShape : public Shape {  
	private: 
		double x,y;  
	public:
		CenteredShape(const std::string&, double, double);  
		CenteredShape();
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
		Circle(const Circle&);
        void setRadius(double newradius);
        double getRadius();
		double area();
		double perimeter();
};

class Rectangle : public RegularPolygon {
	private:
		double width;
		double height;
	  
	public:
		Rectangle();
                Rectangle(const Rectangle& obj);
		Rectangle(const std::string&, double nx ,double ny, double nwidth, double nheight);
		void setWidth(double newwidth);
		void setheight(double newheight);
		double getWidth();
		double getHeight();
		double area();
		double perimeter();
	
};

class Square : public Rectangle{
	private:
		double side;

	public:
		Square(const Square& obj);
		Square();
		Square(const std::string&, double nx, double ny, double nside);
		void setside(double newside);
		double getside();
};
    
#endif