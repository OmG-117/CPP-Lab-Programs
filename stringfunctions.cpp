#include<iostream.h>
#include<conio.h>

int strlength(char len[])
{
 int length=0;
 for (int i=0; len[i] !='\0'; i++)
  length++;

 return length;
}

void strsub(char sub[], int startpos, int endpos)
{
 cout<<endl<<"The required string is : ";
 for(int k=startpos-1; k<=endpos-1; k++)
   cout<<sub[k];
}

void strcopy(char copy[])
{
 char paste[100];

 cout<<endl<<"The copied string is : ";
 for(int i=0; copy[i]!='\0'; i++)
  paste[i]=copy[i];
 
 paste[i]='\0';

 for(int a=0; paste[a]!='\0'; a++)
  cout<<paste[a];
}

void strconcat(char x[], char y[])
{
 char concat[200];

 for (int b=0; x[b]!='\0'; b++)
  concat[b]=x[b];

 int d=0;
 while (y[d]!='\0')
 {
  concat[b]=y[d];
  b++;
  d++;
 }

 concat[b]='\0';

 cout<<endl<<"The concatenated string is : ";

 for(int c=0; concat[c]!='\0'; c++)
  cout<<concat[c];
}

void main()
{
clrscr();

 char array[100];

 int start,end;

 cout<<"Enter the string : ";
 cin>>array;

 cout<<"Enter the start and end position for generating a new string : ";
 cin>>start>>end;

 cout<<strlength(array);
 strsub(array,start,end);

 strcopy(array);

 char arraydash[100];

 cin>>arraydash;

 strconcat(array, arraydash);

getch();
}
