//C++ program that calculates the number of miles
#include <iostream>
using namespace std;
int main(){
	double Fuel_capacity, Miles_per_gallon;
	cout<<"Enter the Fuel Capacaity of the tank in Gallon: "<<endl;
	cin>> Fuel_capacity;
	
	cout<<"Enter the Miles per gallon: "<<endl;
	cin>> Miles_per_gallon;
	
	cout<<"Display the Number_of_miles: "<<  Fuel_capacity * Miles_per_gallon<<endl;
	return 0; 
}
