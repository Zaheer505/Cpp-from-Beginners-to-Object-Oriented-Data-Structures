#include <iostream>
#include <iomanip>
using namespace std;

int menu_choice();
void show_seats();
void ticket_purchase(int* );

const int full = 1;  // Seat is full = 1
const int EMPTY = 0; // Seat is empty = 0

const int rows = 5;
const int columns = 10;

int map[rows][columns];

int main ()
{

int price [5]; // number of rows for price
price[1] = 10; // Seat Prices
price[2] = 8;
price[3] = 5;
price[4] = 5;
price[5] = 5;

cout << "*****Welcome to Cinepex*****\n" << endl;

// 2D array for Empty Seats

for (int i = 1; i <=rows; i++)
	{
		for (int j = 1; j <= columns; j++)
			map [i][j] = EMPTY;
	}

int choice;
	do
	{
		choice = menu_choice();
		switch (choice)
		{
			case 1:
				cout << "View Seat Prices\n\n";
				for (int i = 1; i <= rows; i++)
				{
					cout << "The price for row " << (i) << ": ";
					cout << price [i] << endl;
				}
				break;

			case 2:
				cout << "Purchase a Ticket\n\n";
                ticket_purchase(price);
				break;

			case 3:
				cout << "View Available Seats\n\n";
				show_seats();
				break;

			case 4:
				cout << "Exiting Program...!\n\n";
				break;

			default : cout << "Error input\n";
		}

	} while (choice != 4);

return 0;
}


int menu_choice()
{
int choice;
cout << "\n\t***Please Enter Your Choice***\t\n";
cout << " 1: View Seat Prices.\n";
cout << " 2: Purchase a Ticket.\n";
cout << " 3: View Available Seats.\n";
cout << " 4: Quit the program.\n";		
cin >> choice;
return choice;
}


void show_seats()
{
cout << "\t\tSeats" << endl;
cout << "       1  2  3  4  5  6  7  8  9  10\n";
for (int i = 1; i <= rows; i++)
	{
	cout << endl << "Row " << (i);
	for (int j = 1; j <= columns; j++)
		{
		cout << "  " <<  map[i][j];
		}
	}
cout << endl;
}


void ticket_purchase(int price[])
{
int row2, column2; // users input row and column
char Quit, answer;
do 
{
	cout << "\nPlease select the row you would like to sit in: ";
	cin >> row2;
	
	cout << "\nPlease select the seat you would like to sit in: ";
	cin >> column2;
	if (map [row2] [column2] == 1)
		{
			cout << "Sorry that seat is sold-out, Please select a new seat.\n";
		}
	else 
	{
		cout << "That ticket costs: " << price[row2] << endl;
		cout << "Confirm Purchase? Enter ( y = yes / n = no ) ";
		cin >> answer;
		
		if (answer == 'y')
		{ 
			cout << "\nYour ticket purchase has been confirmed.\n" << endl;
			map [row2][column2] = full;				
		}
		else if (answer == 'n')
		{
			cout << "\nYour ticket is not confirmed.\n";
		}
		else
		{
			cout << "Wrong Option\n";
		}
	}
	cout << "Would you like to look at another seat?(any key = yes / n = no): \n";
	cin >> Quit;
	}
				
while (Quit != 'n');
}