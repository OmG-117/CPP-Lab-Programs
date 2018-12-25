/*
Program No : 06
Developed By : Vinamr L. Sachdeva
Class Section : XI H
Date : 21-July-2018
*/

#include <iostream.h>
#include <conio.h>

void main() {

  clrscr();

  int basic;

  cout<<"Enter your basic salary : ";
  cin>>basic;

  int da, hra, it, tsal, salh;

  da = 0.3*basic;
  hra = 0.25*basic;
  tsal = basic+da+hra;

  if (basic<50000)
  {
    it = 0.1*basic;
  }

  else
  {
    it = 0.2*basic;
  }

  salh = tsal-it;

  cout<<"Salary in Hand = "<<salh;

  getch();
}

/*
OUTPUT:
Enter your basic salary : 10000
Salary in Hand = 14499
*/
