#include <iostream>
#include <string>
using namespace std;
 
// A linked list node
struct Node
{
   string name;
   int roll_number;
   struct Node *next_student;
};

int main(){

struct Node* student_1 = new Node;
struct Node* student_2 = new Node;
struct Node* student_3 = new Node;

student_1->name="luqman";
student_1->roll_number=26;
student_1->next_student=student_2;



student_2->name="Touseef";
student_2->roll_number=28;
student_2->next_student=student_3;


student_3->name="Ahmed";
student_3->roll_number=2;
student_3->next_student=NULL;

// cout<<student_1<<endl;
// cout<<student_2<<endl;
// cout<<student_3<<endl;
// cout<<"------------------------"<<endl;
// cout<<&student_1<<endl;
// cout<<&student_2<<endl;
// cout<<&student_3<<endl;
// cout<<"------------------------"<<endl;

// cout<<student_1->next_student<<endl;
// cout<<student_2->next_student<<endl;
// cout<<student_3->next_student<<endl;


// Lets traverse through the list
Node *temporary_node;
temporary_node->next_student=student_1;
while( temporary_node->next_student!= NULL ){
    temporary_node=temporary_node->next_student;
    cout<<"Name : "<< temporary_node->name ;
    cout<<"\tRoll Number : "<< temporary_node->roll_number <<"   \n";


}

}
