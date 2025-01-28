//C++ program that calculates and display the body max index
#include <iostream>
using namespace std;

int main(){
	float Height, Weight;
	cout<<"Read the Height: "<<endl;
	cin>> Height;
	
	cout<<"Read the Weight: "<<endl;
	cin>> Weight;
	
	cout<<"print the BMI: "<< Weight/(Height*Height)<<endl;
	return 0;
}
