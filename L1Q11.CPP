/*
Program No : 11
Developed By : Vinamr L. Sachdeva
Class Section : XI H
Date : 21-July-2018
*/

#include <iostream.h>
#include <conio.h>

void main()
{

  clrscr();

  char alpha;

  cout<<"Enter an alphanumberic value = ";
  cin>>alpha;

  if (alpha >= 'A' && alpha <= 'Z')
    cout<<endl<<"Capital Alphabet";

  else if (alpha >= 'a' && alpha <= 'z')
    cout<<endl<<"Smallcase Alphabet";

  else if (alpha >= '0' && alpha <= '9')
    cout<<endl<<"Digit";

  else if (alpha == ' ')
    cout<<endl<<"Space";

  else
    cout<<endl<<"Special Character";

  getch();
}

/*
OUTPUT:
Enter an alphanumberic value = e

Smallcase Alphabet
*/
