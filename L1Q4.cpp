/*
Program No : 04
Developed By : Vinamr L. Sachdeva
Class Section : XI H
Date : 21-July-2018
*/

#include <iostream.h>
#include <conio.h>

void main() {

  clrscr();

  int cNo, floor;
  signed char block;

  cout<<"Enter customer number - ";
  cin>>cNo;

  floor = (cNo-1)%5;
  block = ((char) (cNo-1)/10 + 65);

  cout<<"Floor Number = "<<floor<<endl;
  cout<<"Block = "<<block;

  getch();
}

/*
OUTPUT:

Enter customer number - 6
Floor Number = 0
Block = A
*/
