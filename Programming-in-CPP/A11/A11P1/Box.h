/*
CH-230-A
A11_P1.h
m.chahi@jacobs-university.de
*/

#ifndef _BOX_H_
#define _BOX_H_


class Box
{
    private:
        double height;
        double width;
        double depth;
    public:
        Box();                 
        Box(double newheight, double newwidth, double newdepth);  
        ~Box();
	    Box(Box &b);
	    
        void setheight(double newheight);
	    void setwidth(double newwidth);
        void setdepth(double newdepth);
	
	    double getheight();
	    double getwidth();
        double getdepth();

	    void vprint();

};

#endif