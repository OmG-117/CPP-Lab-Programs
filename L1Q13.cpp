/*
Program No : 13
Developed By : Vinamr L. Sachdeva
Class Section : XI H
Date : 3-August-2018
*/
#include <iostream.h>
#include <conio.h>


void main(){

    clrscr();

    int n, input;
    int sum=0;

    cout << "Enter the number of integers to input : ";

    cin>>n;

    for(int i=0; i<n; i++)
    {
        cin>>input;
    	sum+=input;
    }

    cout << "The sum of all the integers = " << sum;

    getch();

}

/*
OUTPUT:
Enter the number of integers to input : 4
2
4
5
6
The sum of all the integers = 17
*/
