#include <iostream>
using namespace std;

int main() {
	char array[3000];
	int count=1;

	for(int i=0; array[i]!='\0'; i++)
	{
	    cin.getline(array,3000);
	    if (array[i]==' ')
	    {count++;}
	}

	cout<<endl<<count;

	return 0;
}
