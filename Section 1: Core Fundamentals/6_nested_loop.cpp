/*
    - Purpose : 
            Nested Looping
    - Understand :
            Loop within Loop            
            Logic Building
    Written by Muhammad Luqman
    MIT License
*/

#include <iostream>
using namespace std;
int main(){
        //1 - Loop within Loop
//-------------------------------------------------------------------------
    int variable=0;
    for(int i;i<10;i++){
        for(int k=0;k<10;k++){
                variable++;
                cout<<variable<<endl;
        }
    }








    //1 - Using loops to make a star
//-------------------------------------------------------------------------

 for(int i;i<10;i++){
        for(int k=0;k<10;k++){
                if(i<k){
                cout<<"*";
                }
            
        }cout<<""<<endl;

}



}