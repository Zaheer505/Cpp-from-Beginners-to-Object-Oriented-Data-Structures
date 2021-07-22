
/*
    - Purpose : 
            Varibles Initiallizing
    - Understand :
            Type , constants/Varible  
            print format specifier
            
    Written by Muhammad Luqman
    MIT License
*/


#include <cstdio>
#include <iostream>
using namespace std;
// a data type is used to describe a variable/constant.
//http://www.cplusplus.com/reference/cstdio/printf/
int main(){
    // 1 - simple definations
    //-------------------------------------------------------------------------
    bool    boolean=true;
    int     a_integer=4;
    double  a_double=12.123;
    float   a_float=10.2;
    char    character='!';
    //byte,library(string)
    
    printf("Do you have a Pen ?  \nKindly Write two numbers %d ,%f \nDone%c ", a_integer,a_float,character);
    const int abc=0;
    //a=1;
    //-------------------------------------------------------------------------















    //2 - array definations

    //-------------------------------------------------------------------------
    int    car_numbers[]={ 1, 2, 3 };
    float  car_heights[]={ 1.222, 2.0, 8.26 };
    string   car_number_plate= "JME 7707"; // now its different 
    string  car_names[3]= {"Honda","Ford","KIA"}; // not ""
    printf("I have three Cars\nMy %s Car is %f up and its %d of my collection with plate %s", 
    car_names[0],car_heights[0],car_numbers[0],car_number_plate); // producing garbage value
    //cout<<car_number_plate;
    //-------------------------------------------------------------------------
    










    




    //3 - different ways for initialization

    //-------------------------------------------------------------------------
  
    // always give usefull names not like a,b,c
    int a_variable_ = 10;
    int a_variable__ = { 10 };
    int a_variable___{ 10 }; // books followed
    int a_variable____(10);

    int empty_array[5]{};  // 5 integer elements in array currently all 0
    int partially_array[]{ 8, 9, 10 }; // length is equal to values we provide
    int full_array[5]{ 1, 2, 3 };  // Given length is bigger than our values so remaining are zero
    int just_initiallized_array[5];  // values are not initiallized
    
    //-------------------------------------------------------------------------


return 0;
}





