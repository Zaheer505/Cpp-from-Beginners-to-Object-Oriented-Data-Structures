/*
    - Purpose : 
             Exploring Classes with Constructors
    - Understand :
            Constructors
            Multi-Constructor

   Written by Muhammad Luqman
    MIT License
*/

//Explaination :
//The Result class has multiple constructors 
// by input we differentiate them
#include <cstdio>
struct Result {
  //conditions -> class name and constructor should be same
  Result() { 
  printf("no input given\n");
  }
  Result(int x) { 
  printf("Your Marks are %d\n", x);
  }
  Result(char x) { 
  printf("Your Grade is %c\n", x);
  }
  Result(float x) { 
  printf("Your Marks are  %f\n", x);
  }
};

int main() {
  
  printf("\f");
  Result student_1;// here no argument constructor is called by making a object
  Result student_2{}; 
  Result student_3('f');
  Result student_4{'c'};// character constructor gets called
  Result student_5={'l'}; 
  Result student_6{99}; // integer constructor
  Result student_7{85.56f}; // float constructor  

}