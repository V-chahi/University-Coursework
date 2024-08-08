/*
CH-230-A
A9_P6.[cpp]
m.chahi@jacobs-university.de
*/

#include <iostream>
#include <cstring>

int myfirst(int a[], int arrSize){
    int i;
    bool ok = false;
    for(i = 0; i < arrSize; i++){
        if(a[i] % 2 == 0 && a[i] > 0){
            ok = true;
            break;
        }
    }

    if(ok)
        return i;
    else 
        return -1;
    
    return 0;
}

double myfirst(double a[], int arrSize){
    int i;
    bool ok = false;
    for(i = 0; i < arrSize; i++){
        if(a[i] == int(a[i]) && a[i] < 0){
            ok = true;
            break;
        }
    }
    if(ok)
        return a[i];
    else 
        return -1;
    
    return 0;
}

char myfirst(char s[]){
    int i;
    int l = strlen(s);
    for(i = 0; i < l; i++){
        if(strchr("aeiouAEIOU", s[i]) == NULL && 
        ((s[i] > 'A' && s[i] < 'Z') || (s[i] > 'a' && s[i] < 'z')))
            break;
    }

    if(i == l)
        return '0';

   return s[i];
}

int main(){

    double ab[] = {7.2, 5.1, -1, -2.3, -6, 6.9, 55.55};
    int a[] = {-1, 0, 1, 5, 3, -434, 69, 99};
    char s[] = "azertyuiop";

    int arrSize = sizeof(a)/sizeof(a[0]);
    std::cout<<"Passing array {-1, 0, 1, 5, 3, -434, 69, 99} returns: "
    <<myfirst(a, arrSize)<<std::endl;

    arrSize = sizeof(ab)/sizeof(ab[0]);
    std::cout<<"Passing array {7.2, 5.1, -1.1, -2.3, -6, 6.9, 55.55} returns: "
    <<myfirst(ab, arrSize)<<std::endl;

    std::cout<<"Passing the array of characters "azertyuiop" returns: "
    <<myfirst(s)<<std::endl;

    return 0;
}