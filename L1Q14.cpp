/*
Program No : 14
Developed By : Vinamr L. Sachdeva
Class Section : XI H
Date : 3-August-2018
*/
#include <iostream.h>
#include <conio.h>


void main(){
    clrscr();

    char temp, n;
    int alpha=0, digit=0, special=0;

    cout<<"Enter the number of characters you want to enter = ";
    cin>>n;

    for(int i=0; i<=n; i++)
    {
        cin>>temp;

        if(temp>='A' && temp<='Z')
        {
            alpha++;
            cout<<"Alpha"<<endl;
        }
        else if(temp>='a' && temp<='z')
        {
            alpha++;
            cout<<"Alpha"<<endl;
        }
        else if(temp>='0' && temp<='9')
        {
            digit++;
            cout<<"Digit"<<endl;
        }
        else
        {
            special++;
            cout<<"Special"<<endl;
        }
    }

    cout<<endl<<"No. of alphabets entered = "<<alpha;
    cout<<endl<<"No. of digits entered = "<<digit;
    cout<<endl<<"No. of special characters entered = "<<special;

    getch();
}

/*
OUTPUT:
Enter the characters to input : 6
s
Alpha
1
Digit
B
Alpha
8
Digit
.
Special

The number of alphabets entered = 2
The number of digits entered = 2
The number of special characters entered = 1
*/
