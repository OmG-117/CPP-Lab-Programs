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
