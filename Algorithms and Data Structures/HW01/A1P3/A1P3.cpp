{\rtf1\ansi\ansicpg1252\cocoartf2639
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww27320\viewh16080\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 /*\
CH-231-A\
A1_P3.cpp\
Amine Chahi\
m.chahi@jacobs-university.de\
*/\
\
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0
\cf0 #include "LinkedList.h"\
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0
\cf0 #include <iostream>\
\
using namespace std;\
\
int main()\{\
DLList<int> my_list;\
my_list.move_front(5);\
my_list.move_front(6);\
my_list.move_front(8);\
my_list.move_front(15);\
my_list.move_end(14);\
my_list.move_end(6);\
cout<<"The number of elements in the list: "<<my_list.n_of_element()<<endl;\
cout<<"The first element of the list: "<<my_list.first_Data()<<endl;\
cout<<"The last element of the list: "<<my_list.Last_Data()<<endl;\
cout<<"popping: "<<my_list.pop()<<endl;\
cout<<"popping: "<<my_list.pop_end()<<endl;\
cout<<"The number of elements in the list after popping: "<<my_list.n_of_element()<<endl;\
cout<<"The NEW first element of the list: "<<my_list.first_Data()<<endl;\
cout<<"The NEW last element of the list: "<<my_list.Last_Data()<<endl;\
return 0;\
\}}