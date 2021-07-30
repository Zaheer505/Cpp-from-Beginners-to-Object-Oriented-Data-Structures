/* 2d array creation 

We can initialize 2D array by simply assigning a variable with 2 values inside close brackets.
The first will determine the number of rows and the other will determine the number of columns.

e.g. int a[rows][columns];

Note: 2d array is also known as 'matrix'

The values can be assigned by putting the curly braces around each row separating by a comma
also each element of a matrix should be separated by a comma as shown in code below.
*/

#include <iostream>

using namespace std;

int main()
{
cout << "Multidimensional Array\n";

// Here, we are making 2D array of 3x3 matrix.
int a[3][3] = {{1,2,3},  // 1st row
               {4,5,6},  // 2nd row
               {7,8,9}}; // 3rd row

// two loops for printing rows and columns
                        
for (int i=0; i<3; i++)
    {
    for (int j=0; j<3; j++)
    {
    cout << a[i][j] << " ";
    }
    cout << endl;
    }

}
