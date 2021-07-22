
/*
    - Purpose : 
            Looping 
    - Understand :
            for loop
            While loop
            
    Written by Muhammad Luqman
    MIT License
*/
#include <iostream>
int main() {

    //1 - Implementing for loop 
    //-------------------------------------------------------------------------
    // 1 initilization , 2 condition ,3 iteration
    for(int iterator =0 ; iterator < 10 ; iterator++){
        std::cout<<iterator<<std::endl;

    } 
    // same output but different approach 

    int iterator=0; // upper i scope is only the upper loop so that is why i can  initialize again
    for(; iterator < 10 ;){
        iterator++; // if i remove this it will go for infinity
        std::cout<<iterator<<std::endl;

    } 
    //-------------------------------------------------------------------------









    //Examplery usage 
    //-------------------------------------------------------------------------
    std::string names[]={"Ali","Ahmed","Luqman","Usman","AbuBakar"};
    int marks[]={80,85,100,85,90};
    for(int index=0;index <5 ;index ++ ){
        std::cout<<names[index]<<" obtained "<<marks[index]<<" marks"<<std::endl;
    }










    //2 - Implementing while loop
    //-------------------------------------------------------------------------
    
    int while_iterator=0;
    while(while_iterator<10){
        std::cout<<"Currently in While loop"<<std::endl;
        while_iterator ++; // if this condition is not implemented if will run forever 
    }
    std::cout<<"Exited While loop"<<std::endl;



    
    //-------------------------------------------------------------------------





    return 0;
}