/*
Program No : 09
Developed By : Vinamr L. Sachdeva
Class Section : XI H
Date : 21-July-2018
*/

#include <iostream.h>
#include <conio.h>

void main()
{

  clrscr();

  int a,b;
  char op;

  cin>>a;
  cin>>op;
  cin>>b;

  switch (op)
  {
    case '+': cout<<a+b;
      break;
    case '-': cout<<a-b;
      break;
    case '*': cout<<a*b;
      break;
    case '/': cout<<a/b;
      break;
    case '%': cout<<a%b;

  }

  getch();
}

/*
OUTPUT:
2+5
7
*/
