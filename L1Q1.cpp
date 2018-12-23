/*
Program No : 01
Developed By : Vinamr L. Sachdeva
Class Section : XI H
Date : 21-July-2018
*/

#include <iostream.h>
#include <conio.h>

void main() {

  clrscr();

  float qty, distance;

  cout<<"Enter fuel quantity used = ";
  cin>>qty;
  cout<<"Enter distance travelled = ";
  cin>>distance;

  float avg;

  avg = distance/qty;

  cout<<"The average is "<<avg<<"Km/L";

  getch();
}

/*
OUTPUT:
Enter quntity of fuel = 10

Enter distance travelled by car = 100

The average is 10Km/L
*/
