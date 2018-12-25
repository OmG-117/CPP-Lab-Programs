/*
Program No : 08
Developed By : Vinamr L. Sachdeva
Class Section : XI H
Date : 21-July-2018
*/

#include <iostream.h>
#include <conio.h>

void main()
{

  clrscr();

  char grade;

  cout<<"Enter Grade : "<<endl;
  cin>>grade;

  switch (grade)
  {
    case 'A': cout<<"90-100";
      break;
    case 'B': cout<<"75-89";
      break;
    case 'C': cout<<"60-74";
      break;
    case 'D': cout<<"45-59";
      break;
    case 'E': cout<<"33-44";
      break;
    case 'F': cout<<"0-32";
    default : cout<<"Invalid!";

  }

  getch();
}

/*
OUTPUT:
Enter Grade :
A
90-100
*/
