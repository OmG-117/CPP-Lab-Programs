/*
Program No : 02
Developed By : Vinamr L. Sachdeva
Class Section : XI H
Date : 21-July-2018
*/

#include <iostream.h>
#include <conio.h>

void main() {

  clrscr();

  float p, c, m, eng, cs;

  cout<<"Math = "<<endl;
  cin>>m;

  cout<<"Physics = "<<endl;
  cin>>p;

  cout<<"Chemistry = "<<endl;
  cin>>c;

  cout<<"English = "<<endl;
  cin>>eng;

  cout<<"Comp Sci = "<<endl;
  cin>>cs;

  float total;
  total = p+c+m+eng+cs;

  float avg;
  avg = total/5;

  cout<<"Total Marks Obtained = "<<total<<endl;
  cout<<"Average marks = "<<avg;

  getch();
}

/*
OUTPUT:
Math =
100
Physics =
90
Chemistry =
80
English =
60
Comp Sci =
100
Total Marks Obtained = 430
Average marks = 86
*/
