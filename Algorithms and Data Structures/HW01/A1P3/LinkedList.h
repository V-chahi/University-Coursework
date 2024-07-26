/*
CH-231-A
A1_P3.cpp
Amine Chahi
m.chahi@jacobs-university.de
*/

template <class T>
class node{
public:
T data;
node<T> *next;
node<T> *prev;
node(T Data){   //Constructor
this->data=Data;
};
};
template <class T>
class DLList{
public:
    int s;
    node<T> *n;
    node<T> *p;
public:
       //Empty Constructor
    DLList(){
    this->s=0;
    this->n=NULL;
    this->p=NULL;
    };
    //Destructor
    ~DLList(){
        if(this->s!=0){
            node<T> *cursor=this->n;
            node<T> *newel;
            while(cursor!=NULL){
                newel=cursor; 			 //deleting element using newel
                delete newel;
                cursor=cursor->next;   		//go to the next elem
            }
        }
    };

    void move_front(T Data){
    node<T> *newel=new node<T>(Data);
    newel->prev=NULL;
    if(this->s==0)			  // if there is no element take newel as first node
        this->p=newel;
    else
        this->n->prev=newel;
    this->n=newel;
    this->s++;
    };

    void move_end(T Data){
    node<T> *newel=new node<T>(Data);
    newel->prev= this->p;
    this->p->next=newel;
    newel->next=NULL;
    if(this->s==0).             // if there is no element take newel as first node
        this->n=newel;
    else
        this->p->next=newel;
    this->p=newel;
    this->s++;
    };

    T pop(){
    if(this->s!=0){
        node<T> *newel=NULL;
        T Saved_Data;            //saving the data here
        Saved_Data = this->n->data;
        newel = this->n;
        this->n=this->n->next;    //removing the data from the list
        delete newel;  		//deleting the allocated memory
        this->s--;
        return Saved_Data;
    }
    else
        std::cout<<"No element in the List."<<std::endl;
    };

    T pop_end(){
    if(this->s!=0){
        node<T> *newel=NULL;
        T Saved_Data; 		  //saving the data here
        Saved_Data = this->p->data;
        newel = this->p;
        this->p=this->p->prev;  //removing the data from the list
        delete newel;         //deleting the allocated memory
        this->s--;
        return Saved_Data;}
    else
        std::cout<<"No element in the List."<<std::endl;
    };

    T first_Data(){
    return this->n->data;
    };

    T Last_Data(){
    return this->p->data;
    };

    int n_of_element(){
    return this->s;
    };
};
