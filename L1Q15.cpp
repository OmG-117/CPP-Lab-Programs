/*
Program No : 15
Developed By : Vinamr L. Sachdeva
Class Section : XI H
Date : 3-August-2018
*/

#include <iostream.h>
#include <conio.h>

void main(){
	clrscr();

	long fact=1;

	int n;
	cout<<"Enter a number : ";
	cin>>n;

	for(int i=2; i<=n; i++)
	{
		fact*=i;
	}

	cout<<"Facotrial of "<<n<<" = "<<fact;

	getch();
}

/*
OUTPUT:
Enter a number : 4
Facotrial of 4 = 24
*/
