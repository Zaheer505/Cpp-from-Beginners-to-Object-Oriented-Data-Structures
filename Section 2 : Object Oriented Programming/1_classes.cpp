/*
    - Purpose : 
             Writing first Structure/Class
    - Understand :
            main function
            library including
            returning '0'

   Written by Muhammad Luqman
    MIT License
*/

//EXPLAINATION:
  // Basic type of class is known as POD(plain - old - data )
  //There is not much difference between struct and Class.
  // Sort of array of elements with different data types. 

#include <cstdio>
#include<iostream>
//Defined a structure with struct keyword
//-------------------------------------------------------
struct Person {
  std::string name;
  bool young;
  int age;
  float hieght;
  
};


int main() {

  //1 - using our Structure
  //-------------------------------------------------------
  Person male;
  male.name="Luqman"; 
  male.young = true; 
  male.age = 24;
  male.hieght = 5.7;
  std::cout<<"\n\nHis name is "<<male.name; // a new type to print if condition inside of printing formate
  printf(", %s and energetic ,age is around %d and makes Robots!\n",male.young?"young":"old",male.age);
   
  //-------------------------------------------------------



  //2 - Different ways to Initiallizing
  //-------------------------------------------------------
  Person person_1{}; // All values are set to 0 or flase
  Person person_2{ "Ahmed", false };  // some fields are filled but other are set to zero
  Person person_3{ "Touseef",true,26,6 };  // Setting all values to user specified

  std::cout<<"\n\nHis name is "<<person_1.name;
  printf(", %s and energetic ,age is around %d and makes Robots!\n",person_1.young?"young":"old",person_1.age);
  
  std::cout<<"\n\nHis name is "<<person_2.name;
  printf(", %s and energetic ,age is around %d and makes Robots!\n",person_2.young?"young":"old",person_2.age);
   
  std::cout<<"\n\nHis name is "<<person_3.name;
  printf(", %s and energetic ,age is around %d and makes Robots!\n",person_3.young?"young":"old",person_3.age);
   
   }


