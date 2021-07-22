/*
    - Purpose : 
             Keyword Class
    - Understand :
            Access specifiers in classes

   Written by Muhammad Luqman
    MIT License
*/


#include <iostream>
using namespace std;
class age_class {   // using class keyword
  //public things can be accessed by object
  public:           
    age_class(int age_class_varible =20) {  // one constructor is a must    
      cout << "\nDefault constructor setting private varibles\n";
        }
    void age_set(int new_age){
      age_class_varible=new_age;
      cout<<" Your age is "<< age_class_varible<<endl;
    }

    int age_increment(int age){
      age_class_varible = age_add(age);
      cout<<" Your new age is "<< age_class_varible<<endl;
    }
    bool young;
    bool old;
    // private things cannot be accessed with an object
  private:
    int age_add(int age){
      return (age+1);
    }
    int age_class_varible;
};


int main() {
  age_class my_age;    // Create an object of MyClass (this will call the constructor)
  my_age.young = true;
  my_age.old=false;
  my_age.age_set(24);
  my_age.age_increment(24);


  // cannot access private varibles
  //my_age.age_class_varible;
  //my_age.age_add(24);
  return 0;
}