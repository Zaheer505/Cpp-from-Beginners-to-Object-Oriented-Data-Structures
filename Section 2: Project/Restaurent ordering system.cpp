#include<iostream>
#include<string>
#include <iomanip>

using namespace std;

struct menuitem //defintion of a struct to store data about resturant
{
       string menulist;
       int price;
};

menuitem menu[16];      //Instance of a struct to store data of 15 resturant items
void getdata();         //prototype of a function to loads data about the items in struct
void showdata();        //prototype of a function show the loaded data
void selectItems();     //prototype of a function  to select the items
void cal();             //prototype of a function to calculate the bill
int c[16] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

int main()
{
       cout << "\n\n*****Welcome to Monal****\n\n" ; 
       getdata(); //Calling of a function to get load the data
       showdata();//calling of a function to display data
       selectItems(); //calling of a function select the items from the menu
       cal(); //calling of a function to calculate the bill
       //system("pause");
       return 0;

}

void getdata() //a function to get load the data
{       
       // Breakfast Menu

       menu[1].menulist = "Plain Egg";
       menu[1].price = 15;
       menu[2].menulist = "Omelet";
       menu[2].price = 15;
       menu[3].menulist = "Paratha";
       menu[3].price = 12;
       menu[4].menulist = "French Toast";
       menu[4].price = 20;
       menu[5].menulist = "Fruit Basket";
       menu[5].price = 120;
       menu[6].menulist = "Coffee";
       menu[6].price = 50;
       menu[7].menulist = "Tea";
       menu[7].price = 20;
       

       // Lunch Menu
       
       menu[8].menulist = "Biryani";
       menu[8].price = 200;
       menu[9].menulist = "Palao";
       menu[9].price = 150;
       menu[10].menulist = "Roll Paratha";
       menu[10].price = 100;
       menu[11].menulist = "Shawarma";
       menu[11].price = 100;


       // Dinner Menu

       menu[12].menulist = "Chicken Karahi";
       menu[12].price = 700;
       menu[13].menulist = "Chicken Tandoori";
       menu[13].price = 600;
       menu[14].menulist = "Chappal Kabab";
       menu[14].price = 80;
       menu[15].menulist = "Seekh Kabab";
       menu[15].price = 80;
}

void showdata() //a function to display menu
{
int food_ch;
do {

       cout << "Enter\n1 for Breakfast\n2 for Lunch\n3 for Dinner\n\n";
       cin >> food_ch;

       switch (food_ch)
       {
       case 1:
       {
       cout << "Breakfast items offered by the restaurant are" << endl;
       cout << 1 << "\t" << menu[1].menulist << setw(12) << "RS " << menu[1].price << endl;
       cout << 2 << "\t" << menu[2].menulist << setw(15) << "RS " << menu[2].price << endl;
       cout << 3 << "\t" << menu[3].menulist << setw(14) << "RS " << menu[3].price << endl;
       cout << 4 << "\t" << menu[4].menulist << setw(9) << "RS " << menu[4].price << endl;
       cout << 5 << "\t" << menu[5].menulist << setw(9) << "RS " << menu[5].price << endl;
       cout << 6 << "\t" << menu[6].menulist << setw(15) << "RS " << menu[6].price << endl;
       cout << 7 << "\t" << menu[7].menulist << setw(18) << "RS " << menu[7].price << endl;
       break;
       }
       case 2:
       {      
       cout << "\n\nLunch items offered by the restaurant are" << endl;
       cout << 8 << "\t" << menu[8].menulist << setw(14) << "RS " << menu[8].price << endl;
       cout << 9 << "\t" << menu[9].menulist << setw(16) << "RS " << menu[9].price << endl;
       cout << 10 << "\t" << menu[10].menulist << setw(9) << "RS " << menu[10].price << endl;
       cout << 11 << "\t" << menu[11].menulist << setw(13) << "RS " << menu[11].price << endl;
       break;
       }
       case 3:
       {      
       cout << "\n\nDinner items offered by the restaurant are" << endl;
       cout << 12 << "\t" << menu[12].menulist << setw(7) << "RS " << menu[12].price << endl;
       cout << 13 << "\t" << menu[13].menulist << setw(5) << "RS " << menu[13].price << endl;
       cout << 14 << "\t" << menu[14].menulist << setw(8) << "RS " << menu[14].price << endl;
       cout << 15 << "\t" << menu[15].menulist << setw(10) << "RS " << menu[15].price << endl;
       break;
       }
       default:
       {
       cout << "Invalid Input, Please Select Again\n\n";
       }
       }
       } while ( food_ch != 1 && food_ch != 2 && food_ch != 3);
}

void selectItems() //function select the items from the menu
{
       int ch,quantity;
       char con;
       do{
              cout << "\n\nEnter your choice : ";
              cin >> ch;        //takes the choice from the user to select the item
              cout << "Enter the Quantity :";
              cin >> quantity;

              if ( ch > 0 && ch < 16)
                     {
                            c[ch] = c[ch] + quantity;
                            cout << "You have Selected : " << menu[ch].menulist << endl;
                     }
              else
                    {
                        cout << "invalid input" << endl;
                    }

              cout << "\nTo select more items enter y / n (y = yes, n = no) ";
              cin >> con;


       }
       while (con != 'n');
       cout << endl;
}
void cal()
{
       double total = 0;
       cout << "------Thank you for visiting-----" << endl;
       for (int i = 1; i < 16; i++)
       {
              if (c[i] > 0)
              {
                     cout << c[i] << "\t" << menu[i].menulist << "   RS " << menu[i].price << endl;
                     total = total + (menu[i].price*c[i]);
              }

       }
       cout << "\n\n-----------------------------------------------" << endl;
       cout << "            Total Amount      RS " << total << endl;
       cout << "-----------------------------------------------" << endl;


}
