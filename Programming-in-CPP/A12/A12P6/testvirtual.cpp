/*
CH-230-A
a12 p6.cpp
Amine Chahi
m.chahi@jacobs-university.de
*/
#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Rectangle.h"
#include "Ring.h"
#include "Square.h"

const int num_obj = 7;
int main()
{
    /*
                    Area
                    __|__
                   /     \
             Circle       Rectangle  (Circle and Rectangle inherite from Area)
               |             |
              Ring             Square
    (Ring inherits from Circle)
        
    */

        Area *list[num_obj];

      int index = 0;

      double sum_area = 0.0;
      double sum_perimeter=0.0;
      double perimeter;

        Ring blue_ring("BLUE", 5, 2);
        Circle yellow_circle("YELLOW", 7);
        Rectangle green_rectangle("GREEN",5,6);

        Circle red_circle("RED", 8);
        Rectangle black_rectangle("BLACK", 10, 20);
        Ring violet_ring("VIOLET", 100, 5);
        Square black_square("BLACK", 3);
        list[0] = &blue_ring;
        list[1] = &yellow_circle;
        list[2] = &green_rectangle;
        list[3] = &red_circle;
        list[4] = &black_rectangle;
        list[5] = &violet_ring;
        list[6]=&black_square;
        while (index < num_obj) {

            (list[index])->getColor();
            double area = list[index]->calcArea();
       
        sum_area += area;
        perimeter = list[index]->calcPerimeter();
        sum_perimeter += perimeter;
        index++;
        }
        cout <<endl<<endl<< "The total area: "
                << sum_area << " units " << endl;

          cout << "\nThe total Perimeter: "
                << sum_perimeter << " units " << endl;
        return 0;
    }
