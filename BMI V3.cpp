//C++ program that calculates and display the body max index
#include <iostream>
#include <string.h>
using namespace std;

int main(){
	float Height, Weight, BMI;
	char Gender;
	string body_type;
	int no_ppl;
	string sex;
	
	cout<<"Print the number of people to calculate for: "<<endl;
	cin>> no_ppl;
	
	for( int i=1; i<=no_ppl; i++){
	cout<<"Ask the Gender M for Male and F for Female: "<<endl;
	cin>> Gender;
	
	cout<<"person: "<<i<<endl;
	
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
	if(Gender=='m' || Gender=='M'){
		sex="Male";
	}
		else if(Gender=='f' || Gender=='F'){
			sex="Female";
		}
		
	cout<<"Print the Gender: "<<sex<<endl;
	cout<<"Print the BMI: "<<BMI<<endl;			
	cout<<"print the Body Type: "<<body_type<<endl;
	}
	return 0;
} 
