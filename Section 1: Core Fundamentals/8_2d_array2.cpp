#include <iostream>

using namespace std;

int main()
{
cout << "Multidimensional Array\n";

// Taking 2d array values from user

int rows, columns;
cout << "Enter number of rows\n";
cin >> rows;
cout << "Enter number of columns\n";
cin >> columns;

int arr[rows][columns];

// for assigning values
for (int i=1; i<=rows; i++)
    {
    for (int j=1; j<=columns; j++)
    {
    cout << "Enter " << j << " element of row " << i << endl;
    cin >> arr[i][j];
    }
    cout << endl;
    }

cout << "*** Array ***\n\n" ;

// for printing values
for (int i=1; i<=rows; i++)
    {
    for (int j=1; j<=columns; j++)
    {
    cout << arr[i][j] << " ";
    }
    cout << endl;
    }
}
