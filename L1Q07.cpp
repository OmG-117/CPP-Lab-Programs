/*
Program No : 07
Developed By : Vinamr L. Sachdeva
Class Section : XI H
Date : 21-July-2018
*/

#include <iostream.h>
#include <conio.h>

void main() {

  clrscr();

  float math, eng, sci;

  cout<<"Math = ";
  cin>>math;

  cout<<"English = ";
  cin>>eng;

  cout<<"Science  = ";
  cin>>sci;

  float total = eng+math+sci;
  cout<<endl<<"Total = "<<total<<endl;

  float per = total/3;
  cout<<"Percentage = "<<per<<endl;

  (per>=50)?cout<<"SELECTED":cout<<"NOT SELECTED";

  getch();
}

/*
OUTPUT:
Math = 90
English = 80
Science  = 70

Total = 240
Percentage = 80
SELECTED
*/
