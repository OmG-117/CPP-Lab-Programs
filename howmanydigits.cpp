#include <iostream>
using namespace std;

int main() {
    
    int n;
    cin>>n;
    
    int count=0;
    
    while (n>0)
    {
        n=n/10;
        count++;
    }
    
    if (count<=3)
        cout<<count;
    else 
        cout<<"More than 3 digits";
	
	return 0;
}
