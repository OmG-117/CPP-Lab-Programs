#include <iostream>
#include <string>
using namespace std;

int readiness();

int main() {

  cout<<"Welcome to this Question Game v1.1 by Vinamr Sachdeva"<<endl;
  cout<<"====================================================="<<endl<<endl;

  if (readiness()==1){
	string name;
	cout<<"What is your name ? "<<endl;
	cin>>name;

	int age;
	cout<<"In what year were you born ? "<<endl;
	cin>>age;

	string country;
	cout<<"Where do you live ? "<<endl;
	cin>>country;

	cout<<endl<<"So, you are "<<name<<", of age "<<(2018-age)<<" from "<<country<<"."<<endl;
	cout<<endl<<"Thank You for playing, see you next time !";
	return 0;
    }

    else if (readiness()==0)
        cout<<"Ok, I will sit idle. ";

    else
        cout<<"Invalid, enter 'Y' or 'N'";
}

    int readiness(){
        char check;
        cout<<"Are you ready ? (Y/N)"<<endl;
        cin>>check;

        if (check=='Y'||check=='y')
            return 1;
        else if (check=='N'||check=='n')
            return 0;
        else
            return 5;
    }
