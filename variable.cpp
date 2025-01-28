//C++ program that calculates the result of the expression of the variables
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	double X, Y;
	cout<<"Enter the X variable: "<<endl;
	cin>> X;
	
	cout<<"Enter the Y variable: "<<endl;
	cin>> Y;
	
	cout<<"print the result of the expression: "<< pow(X, Y)<<endl;
	return 0;
}
