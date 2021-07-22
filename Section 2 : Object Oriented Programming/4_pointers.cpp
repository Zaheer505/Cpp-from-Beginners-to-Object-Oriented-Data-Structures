/*
    - Purpose : 
             Pointers
    - Understand :
            Pointers
            Pointing to arrays 
            Chain of Pointers

   Written by Muhammad Luqman
    MIT License
*/


/*
//Explaination:
- Pointers are used to refer memory directory through address
- You can use pointers to access object through address

int* pointer;
formate specifier for pointer is " %p "
printf("Texample printing = %p.", pointer);

*/

#include <cstdio>
#include<iostream>
using namespace std;
int main() {
// 1- Saving address in a pointer and updating values
//-----------------------------------------------------------------------

  // int number_a = 10,number_b = 20;
  // printf("\nAddress of number_a = %p",&number_a);
  // printf("\nAddress of number_b = %p",&number_b);

  // int *pointing_number = &number_a;
  // printf("\nAddress of pointing_number = %p",&pointing_number); // it is not going to be same to &number_a , pointer has its own address
  // *pointing_number=4;
  
  // printf("\n%d\n\n",*pointing_number);
  // printf("\n%d\n\n",*number_a);



//-----------------------------------------------------------------------


// 2- Accesing Array's elements through Addresses
//-----------------------------------------------------------------------
  int array[]={0,1,2,3,4};
  int *pointer = &array[0];
  cout<<"\nPrinting Addresses\n";
  for (int looping_variable=0;looping_variable<5;looping_variable++){
    cout<<"\n"<<pointer++;
  }
  cout<<"\n\nPrinting Values\n";
  pointer=&array[0]; // Why i have to do this and this time no *
  for (int looping_variable=0;looping_variable<5;looping_variable++){
    
    cout<<*pointer++<<endl;
  }
//-----------------------------------------------------------------------





// 3- Chain of Pointers
//-----------------------------------------------------------------------

  // int number_1=100;
  // int *ptr=&number_1;
  // int **ptr_ptr=&ptr;
  // int ***ptr_ptr_ptr=&ptr_ptr;

  // cout<<number_1<<endl;
  // cout<<*ptr<<endl;
  // cout<<**ptr_ptr<<endl;
  // cout<<***ptr_ptr_ptr<<endl;
  // ***ptr_ptr_ptr=20;

  // cout<<number_1<<endl;
  // cout<<*ptr<<endl;
  // cout<<**ptr_ptr<<endl;
  // cout<<***ptr_ptr_ptr<<endl;


//-----------------------------------------------------------------------

  

  return 0;
}



