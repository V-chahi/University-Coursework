/*
CH-231-A
a1_p1.cpp
Amine Chahi
m.chahi@jacobs-university.de
*/

#include <iostream>
using namespace std;


class Complex                                                 //Initiating Complexe class
{
private:
    double re, im;

public:
    Complex(double re, double im)
    {
        this->re = re;
        this->im = im;
    }

    bool operator==(const Complex &o)
    {
        if ((this->re == o.re) && (this->im == o.im))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    Complex operatoradd(const Complex o)
    {
        return Complex(this->re + o.re, this->im + o.im);
    }
    friend ostream &operator<<(ostream &o, Complex c)
    {
        o << c.re << "+" << c.im << "i" << endl;
        return o;
    }
};

template <typename T>
int array_search(T arr[], int size, T search)        //Searching 4 elem in Arr using temp
{
    for (int i = 0; i < size; i++)
    {
        if (search == arr[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{                                                              //Testing w/ different DATA Types

    int iarr[] = {1, 2, 3, 4, 5, 6};                        
    cout << array_search(iarr, 6, 99) << endl;

    double darr[] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
    cout << array_search(darr, 6, 4.4) << endl;

    string strarr[] = {"white", "black", "grey"};
    cout << array_search(strarr, 3, string("grey")) << endl;

    Complex carr[] = {Complex(1, 2), Complex(3, 4), Complex(-2, -1)};
    cout << array_search(carr, 3, Complex(-2, -1)) << endl;
}
