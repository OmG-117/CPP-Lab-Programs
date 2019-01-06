#include <iostream>
using namespace std;

int main() {
    
    int row, space, star;
    
    cin>>row;
    
    int j;
    
    for (int i=1; i<=row; i++)
    {
        for (j=row-i; j>=1; j--)
            cout<<" ";
        for (int k=1; k<=(2*i-1); k++)
            cout<<"*";
        
        cout<<endl;
    }
    
    for (int i=row-1; i>=1; i--)
    {
        for (j=1; j<=row-i; j++)
            cout<<" ";
        for (int k=1; k<=(2*i-1); k++)
            cout<<"*";
        
        cout<<endl;
    }
	
	return 0;
}

/* Output (if Input = 5)

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
    
*/

