//C++ program that calculates and display the body max index
#include <iostream>
#include <string.h>
using namespace std;

int main(){
	float Height, Weight, BMI;
	char Gender;
	string body_type;
	
	cout<<"Ask the Gender M for Male and F for Female: "<<endl;
	cin>> Gender;
	
	cout<<"Read the Height: "<<endl;
	cin>> Height;
	
	cout<<"Read the Weight: "<<endl;
	cin>> Weight;
	
	BMI= Weight/(Height*Height);
	if(BMI>=30){
		body_type="OBESE";
	}
    else if(Gender=='m' || Gender=='M'){
    	if(BMI<20.5){
    		body_type="UNDER WEIGHT";
		}
		else if(BMI<25.9){
			body_type="NORMAL WEIGHT";
	}
			else if(BMI<29.9){
				body_type="OVER WEIGHT";
			}}
	
	    else if(Gender=='f' || Gender=='F'){
    	if(BMI<18.5){
    		body_type="UNDER WEIGHT";
		}
		else if(BMI<24.9){
			body_type="NORMAL WEIGHT";
	}
			else if(BMI<29.9){
				body_type="OVER WEIGHT";
			}}
		
	cout<<"Print the Gender: "<<Gender<<endl;
	cout<<"Print the BMI: "<<BMI<<endl;			
	cout<<"print the Body Type: "<<body_type<<endl;
	return 0;
} 
