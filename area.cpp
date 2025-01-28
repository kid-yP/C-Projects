//Computing the area and perimeter of a circle.
#include <iostream>
using namespace std;

int main(){
	float R;
	
	cout<<"Read the Raidus of the circle: ";
	cin>> R;
	
	const float PI=3.14;
	
	cout<<"Print the area of the circle: "<<PI*R*R<<endl;
	cout<<"Print  the Perimeter of the circle: "<<2*PI*R<<endl;
	cout<<"\"Laughter is the best medicine.  Kidus Yosef\" ";
	
	return 0;
	/* Typer of errors:-
	Syntax(compilation error):-no output. The program cannot run
	
	Run time error:-there is output. The program can run, but this error happens because of memory crush, or mathematical rule violation.
	for example dividing a number by zero. No file found
	Logical error:-there is an output(but the wrong one) The most difficult type of error to debug. The reason is lack of good understanding of good description or the business logic. The error will turn out the output that is undesirable. 
    */ 
}
