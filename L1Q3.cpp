/*
Program No : 03
Developed By : Vinamr L. Sachdeva
Class Section : XI H
Date : 21-July-2018
*/

#include <iostream.h>
#include <conio.h>
#include <math.h>

void main(){
	clrscr();

	float rad, circum, area;

  	cout<<"Enter radius";
  	cin>>rad;

  	circum = 2*3.14*rad;
  	area = 3.14*pow(rad,2);

  	cout<<endl<<endl"Circumfrence = "<<circum<<" "<<"Area = "<<area;

  	getch();

}

/*
OUTPUT:
Enter radius
12

Circumfrence = 75.360001 Area = 452.160004
*/
