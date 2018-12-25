/*
Program No : 12
Developed By : Vinamr L. Sachdeva
Class Section : XI H
Date : 21-July-2018
*/

#include <iostream.h>
#include <conio.h>

void main()
{

  clrscr();

  int cl;
  char stream;

  cout<<"Enter class = ";
  cin>>cl;
  cout<<"Enter stream  = ";
  cin>>stream;

  if (cl == 11 && stream == 'S')
  {
    cout<<"F Block";
  }

  else if (cl == 11 && stream == 'C')
  {
    cout<<"E Block";
  }

  else if (cl == 11 && stream == 'H')
  {
    cout<<"D Block";
  }

  else if (cl == 12 && stream == 'S')
  {
    cout<<"C Block";
  }

  else if (cl == 12 && stream == 'C')
  {
    cout<<"B Block";
  }

  else if (cl == 12 && stream == 'H')
  {
    cout<<"A Block";
  }

  getch();
}

/*
OUTPUT:
Enter class = 11
Enter stream  = S
F Block
*/
