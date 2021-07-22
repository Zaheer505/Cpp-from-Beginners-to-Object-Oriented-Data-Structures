
/* What is Struct/Structure in C++ ??

Structure is a collection of variables of different data types under a single name.
It is similar to a class in that, both holds a collecion of data of different data types.

For example: You want to store some information about a student: his/her name, his age, 
his roll number, etc. You can easily create different variables name, age, roll number, 
semester, etc to store these information separately.

However, if you want to store the information of the whole class, you need to create different 
variables for each information per person: name1, age1, rollNo1, name2, age2, rollNo2, etc.

You can easily visualize how big and messy the code would look. Also, since no relation between 
the variables (information) would exist, it's going to be a daunting task.

A better approach will be to have a collection of all related information under a single name 
Student, and use it for every student. Now, the code looks much cleaner, readable and efficient as well.

This collection of all related information under a single name Student is a structure.

The 'struct' keyword defines a structure type followed by an identifier (name of the structure).

Then inside the curly braces, you can declare one or more variables of that structure. For example: 

struct Student
{
char name[20];
int rollno;
};

Now after defining the structure, you can create a structure variable as: 

Student information;

Here, 'information' is the variable of the structure.

The members of structure variable is accessed using a dot (.) operator.

Suppose, you want to access 'rollno' of structure variable 'information' and assign 525 to it. 
You can perform this task by using following code below: 

information.rollno = 525;

*/

// Code Example

#include <iostream>

using namespace std;

struct Student
{
char name[20];
int age;
string rollno;
int semester;
};

int main()
{
Student info[20]; // For 20 students

cout << "\n***Adding student details***\n";

for (int i=1; i<=2; i++) // Ending Loop after 2nd Student for Ease
{
cout << "\nEnter student # " << i << " name\n";
cin >> info[i].name;
cout << "Enter student # " << i << " age\n";
cin >> info[i].age;
cout << "Enter student # " << i << " roll number\n";
cin >> info[i].rollno;
cout << "Enter student # " << i << " semester\n";
cin >> info[i].semester;
}

cout << "\n\n***Student information***\n";
for (int i=1; i<=2; i++)
{
cout << "\nStudent # " << i;
cout << "\nName: " << info[i].name;
cout << "\nAge: " << info[i].age;
cout << "\nRoll number: " << info[i].rollno;
cout << "\nSemester: " << info[i].semester << endl;
}
}
