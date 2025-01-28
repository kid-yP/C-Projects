// Activity 1:- Arithmetic(simple) calculator
#include<iostream>

using namespace std;
int main(){
	
	int c;
   	float a, b, d, e;
	
	do{
	cout<<"Enter 1 for addition: "<<endl;
	cout<<"Enter 2 for subtraction: "<<endl;
	cout<<"Enter 3 for multiplication: "<<endl;
	cout<<"Enter 4 for division: "<<endl;
	
	cin>>c;
	
	cout<<"Enter the first operand: "<<endl;
	cin>>a;
	
	cout<<"Enter the second operand: "<<endl;
	cin>>b;
	
	switch(c){
		case 1:
			d = a + b;
			break;
		case 2:
			d = a - b;
			break;
		case 3:
		    d = a * b;
			break;				
		case 4:
		    d = a / b;
		    break;
		default:
		cout<<"You have entered the wrong operation or number!"<<endl;						
	}
	
	cout<<"The result of the operation is: "<<d<<endl;
	
	cout<<"Enter the number 0 to terminate the program: ";
	cin>> e;
	cout<<"\n";
	
 	}while (e != 0);
 	
	return 0;
}
