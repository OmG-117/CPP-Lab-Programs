/*
From codechef's "LIFELTD" problem
To search an L shaped pattern with 'l's (Lower case 'L') in a 2d array

Sample input:
3
laz
lla
aaa
ala
lla
aaa
lll
lll
lll

Output:
yes
no
yes
*/

}
#include <iostream>
using namespace std;

int main() {

int t;
cin>>t;

for (int q=1; q<=t; q++)
{
    char arr[3][3];
    for(int i=0;i<3;++i)
    {
     for(int j=0;j<3;++j)
     {
         cin>>arr[i][j];
     }
    }
    
    int count=0;
    
    for(int r=0; r<2; r++)
    {
        for(int c=0; c<2; c++)
        {
        if (arr[r][c]=='l' && arr[r+1][c]=='l' && arr[r+1][c+1]=='l')
	       count++;
        }
    }
    
    if (count==0)
        cout<<endl<<"no";
    else
        cout<<endl<<"yes";
}

return 0;
}
