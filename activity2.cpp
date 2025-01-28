#include <iostream>
#include <string.h>

using namespace std;

int main(){
	string name[3];
	
	cout<<"Enter your name: "<<endl;
	cin>>name[0]>>name[1]>>name[2];
	
 	cout<<"Welcome, "<<name[0]<<" "<<name[1]<<" "<<name[2]<<"!";

	cout<<endl;
	
	return 0;
} 


/*
int main(){
	string first_name, middle_name, last_name;
	
	cout<<"Enter first name of a person: "<<endl;
	cin>>first_name;
	
	cout<<"Enter middle name of a person: "<<endl;
	cin>>middle_name;
	
	cout<<"Enter last name of a person: "<<endl;
	cin>>last_name;
	
	cout<<"Welcome"<<" "<<first_name<<" "<<middle_name<<" "<<last_name<<"!"<<endl;
	My attempt in writing a program that read your full name and print welcome message. 
	unfortunately it is not written in this manner, but that is a good try tho. 
	
	return 0;
}*/



