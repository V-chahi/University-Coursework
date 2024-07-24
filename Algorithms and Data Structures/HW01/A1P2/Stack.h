/*
CH-231-A
a1_p2.h
Amine Chahi
m.chahi@jacobs-university.de
*/
#ifndef Stack_h
#define Stack_h

#include <iostream>
using namespace std;

template <class T>
class Stack
{
private:
    int size,idx;
    T *arr;

public:

    Stack()                                                            //Init Default Constructor w/ size=10
    {
        size = 10;
        arr = new T[size];
        idx = 0;
    };

    Stack(const Stack &obj)                                      //Init Copy Constructor
    {
        this->size = obj.size;
        this->arr = new T[obj.size];
        for (int i = 0; i < (this->size); i++)
        {
            this->arr[i] = obj.arr[i];
        }
        this->idx = obj.idx;
    };

    Stack(int size)                                         //Init Constructor w/ parametric size
    {
        this->size = size;
        this->arr = new T[size];
        this->idx = 0;
    };

    bool push(T element);                                //Declare push fct

    bool pop(T &out)                                 //Init pop fct
    {
        if (this->idx == 0)
        {
            cout << "Stack Empty" << endl;
            return false;
        }
        this->index=this->index-1;
        out = this->arr[this->index];
        return true;
    }
    
    T back(void)                             //Return item at top
    {
        return this->arr[(this->idx) - 1];
    };

    int getNumEntries()                 //Return num of elems
    {
        return idx;
    };
    
    ~Stack()                         //Init destructor
    {
        delete[] this->arr;
    }
     
    void print()        //Self Reference
    {
        for (int i = 0; i < index; i++)
        {
            cout<<this->arr[i]<<"  ";
        }
        cout<<endl;
    }
};
template <class T>                                  //Init Push fct
bool Stack<T>::push(T element)
    {
        if (this->idx == this->size)
        {
           cout<<"Stack Full"<<endl;
           return false;
        }
        this->arr[this->idx] = element;
        this->idx=this->idx + 1;
        return true;
    }

#endif /* Stack_h */
