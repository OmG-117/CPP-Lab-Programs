/*
Program No : 16
Developed By : Vinamr L. Sachdeva
Class Section : XI H
Date : 20-August-2018
*/

#include <iostream.h>
#include <conio.h>

void main(){

    clrscr();

    int x, y, sol = 1;

    cout<<"Enter the base : ";
    cin>>x;
    cout<< "Enter the exponent : ";
    cin>>y;

        for (int i = 1; i <= y; i++)
        {
    	sol *= x;
        }

    cout<<x<<"^"<<y<<" = "<<sol;

    getch();

}

/*
OUTPUT:
Enter the base : 2
Enter the exponent : 10
2^10 = 1024
*/
