#include <iostream>
#include <cmath>
using namespace std;

//Function prototypes
float flightrange(float ur, float thetar);
float hmax(float uh, float thetah);
float flightduration(float ut, float thetat);
void position(float uc, float thetac, float tc);
float launchangle(float range, float ua);

//Program starts
int main() {
	float theta, u;
	float t;
	int option;

	//Welcome message :P
	cout<<"Projectile Calculator v1.3 by Vinamr Sachdeva"<<endl<<"============================================="<<endl;

	//Menu
	cout<<endl<<"Choose one of the following : "<<endl;
	cout<<"1. Range"<<endl<<"2. Maximum Height"<<endl<<"3. Flight Duration"<<endl<<"4. Position at a particular time"<<endl<<"5. Range for a given launch angle & launch velocity"<<endl<<endl;
	cin>>option;

	//Conditionals for menu options

	//Flight Range
	if (option==1) {

        	cout<<"Enter launch angle (in degrees) : ";
    		cin>>theta;
    		theta=theta*3.14/180;
    		cout<<endl<<"Enter launch velocity : ";
    		cin>>u;

    		cout<<endl<<endl<<"Range of the Projectle = "<<flightrange(u, theta)<<" meters";
    		cout<<endl<<"------------"<<endl<<endl;
	}

	//Maximum height of trajectory
	else if (option==2) {

		cout<<"Enter launch angle (in degrees) : ";
    		cin>>theta;
    		theta=theta*3.14/180;
    		cout<<endl<<"Enter launch velocity : ";
    		cin>>u;

    		cout<<endl<<endl<<"Maximum Height of the Projectile = "<<hmax(u, theta)<<" meters";
    		cout<<endl<<"------------"<<endl<<endl;
	}

	//Flight Duration
	else if (option==3) {
		cout<<"Enter launch angle (in degrees) : ";
    		cin>>theta;
    		theta=theta*3.14/180;
    		cout<<endl<<"Enter launch velocity : ";
    		cin>>u;

    		cout<<endl<<endl<<"Flight Duration of the Projectle = "<<flightduration(u, theta)<<" seconds";
    		cout<<endl<<"------------"<<endl<<endl;
	}

	//Position of object (coordinates)
	else if (option==4) {

		cout<<"Enter launch angle (in degrees) : ";
    		cin>>theta;
    		theta=theta*3.14/180;
    		cout<<endl<<"Enter launch velocity : ";
    		cin>>u;
    		cout<<endl<<"Enter time at which you want coordinates of trajectory : ";
    		cin>>t;

    		cout<<endl<<endl<<"Position : ";
    		position(u, theta, t);
    		cout<<endl<<"------------"<<endl<<endl;
	}

	else if (option==5) {
		float range_;
		cout<<"Enter flight range : ";
		cin>>range_;
		cout<<endl<<"Enter launch velocity : ";
    		cin>>u;
		cout<<endl<<endl<<"Predicted launch angle : ";
    		cout<<launchangle(range_,u);
    		cout<<endl<<"------------"<<endl<<endl;
	}

	//Error message
	else {
	    	cout<<endl<<"You have entered an incorrect input, please enter numbers preceeding one of the following menu options :";
	    	cout<<endl<<endl<<"Choose one of the following : "<<endl;
	    	cout<<"1. Range"<<endl<<"2. Maximum Height"<<endl<<"3. Flight Duration"<<"4. Position at a particular time"<<endl<<"5. Range for a given launch angle & launch velocity"<<endl<<endl;
	    	cin>>option;
	}

	return 0;
}

//Functions

float flightrange(float ur, float thetar){
    float angle_r=2*thetar;
    return (ur*ur*sin(angle_r))/9.8;
}

float hmax(float uh, float thetah){
    return (uh*uh*sin(thetah)*sin(thetah))/(2*9.8);
}

float flightduration(float ut, float thetat){
    return (2*ut*sin(thetat))/9.8;
}

void position(float uc, float thetac, float tc){
    float x=uc*cos(thetac)*tc;
    float y=uc*sin(thetac)*tc-(4.9)*tc*tc;
    float angle_c=2*thetac;

    if (y>=0)
    	cout<<"("<<x<<","<<y<<")";
    else
        cout<<"("<<(uc*uc*sin(angle_c))/9.8<<","<<"0"<<")";
}

float launchangle(float range, float ua){
    float two_theta=asin((range*9.8)/(ua*ua));
    float launch_angle = (two_theta/2)*57.2958; //Converting degrees to radians

    return launch_angle;
}
