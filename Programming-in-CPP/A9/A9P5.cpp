/*
CH-230-A
A9_P5.[cpp]
m.chahi@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
    int tries = 0;
    int randNumber, guess;
    char name[100];

    std::cout<<"Your name: ";
    std::cin>>name;

    srand(static_cast < unsigned int >(time(0)));

    randomNumber = (rand() % 100) +1;

    do{
        std::cout<<"pick number from 1 to 100: ";
        std::cin>>guess;

        if(guess > randomNumber)
            std::cout<<"Guess too high!"<<'\n';
        else if(guess < randomNumber)
            std::cout<<"Guess too low!"<<'\n';

        tries++;

    }while(guess != randomNumber);

    std::cout<<"Congratulations!"<<'\n';

    return 0;
}