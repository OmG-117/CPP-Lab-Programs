/*
Program No : 10
Developed By : Vinamr L. Sachdeva
Class Section : XI H
Date : 21-July-2018
*/

#include <iostream.h>
#include <conio.h>

void main()
{

  clrscr();

  char gender;
  int age;

  cout<<endl<<"Enter age : ";
  cin>>age;
  cout<<"Enter Gender : ";
  cin>>gender;

  if (age >= 60 && gender == 'M')
    cout<<endl<<"Floor Number = 7";

  else if (age >= 20 && age <60 && gender == 'M')
    cout<<"Floor Number = 6";

  else if (age >=10 && age <20 && gender == 'M')
    cout<<"Floor Number = 5";

  else if (age <10 && gender == 'M')
    cout<<"Floor Number = 4";

  else if (age >= 60 && gender == 'F')
    cout<<"Floor Number = 3";

  else if (age >= 20 && age <60 && gender == 'F')
    cout<<"Floor Number = 2";

  else if (age >= 10 && age <20 && gender == 'M')
    cout<<"Floor Number = 1";

  else if (age <10 && gender == 'F')
    cout<<"Floor Number = 0";

  getch();
}

/*
OUTPUT:
Enter age : 16
Enter Gender : M
Floor Number = 5
*/
