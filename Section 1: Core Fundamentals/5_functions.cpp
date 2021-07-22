/*
    - Purpose : 
            Functions 
    - Understand :
            Void functions
            Returning Functions
            
    Written by Muhammad Luqman
    MIT License
*/
#include <cstdio>

void just_print();          //Function declaration is a must before calling .
int squaring(int number);

int main() {
    just_print(); // calling out function , order of explaination is not sequential
    return 0; // by default it also set to 0( depending upon execution )
}

// Definging our function
void just_print(){
    printf("\n\n\tPrinting\n");
    int squared_number= squaring(9);
    printf("%d \n",squared_number);
}

int squaring(int number){
    return (number*number);
}

