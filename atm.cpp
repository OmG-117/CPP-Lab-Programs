#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    int withdraw;
    float balance;
    
	cin>>withdraw;
	if (withdraw<=0 && withdraw>2000)
	    cout<<"Enter an amount between 0 and 2000";
	
	cin>>balance;
	if (balance<0 && withdraw>2000)
	    cout<<"Enter an amount between 0 and 2000, including 0 and 2000";
	    
	int precision;
	precision = balance*pow(10,2);
	balance = precision/pow(10,2);
	
	if (withdraw%5==0 && (balance-withdraw-0.5)>0)
	{
	    balance=balance-withdraw-0.5;
	    cout<<balance;
	}
	else 
	    cout<<balance;
	
	return 0;
}
