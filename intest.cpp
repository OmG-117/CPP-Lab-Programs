#include <iostream>
using namespace std;

int main() {
    
    int n,k;
    cin>>n>>k;
    
    int arr[10000000];
    
    int count=0;
    
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
        if(arr[i]%k==0)
            count++;
    }
    
    cout<<count;
	
	return 0;
}
