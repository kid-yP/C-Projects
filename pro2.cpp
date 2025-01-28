#include <iostream>
using namespace std;
/*
void pattern(char symbol, int size){
	for(int i = 1; i <= size; i++){
		for(int j = 1; j <= i; j++){
			cout<<symbol;
		}
		cout<<endl;
	}
}

int main(){
	int size;
	char symbol;
	int option;
	cout<<"Enter number one to choose the default program."<<endl;
	cout<<"Enter number two to choose your own symbol and size."<<endl;
	cin>>option;
	
	switch(option){
	case 1: 
	symbol = '*';
	size = 5;
	break;
	
	case 2:
	cout<<"Enter the type of symbol you want to enter: ";
	cin>>symbol;	
	cout<<"Enter the size of the pattern: ";
	cin>>size;
	
	default:
	cout<<"You have entered a wrong expression."<<endl;
	
	}
	pattern(symbol, size);
	return 0;
}
*/
void square(int& num) {
    num = num * num;
    return (square);
}

// Function to calculate the square of a rational number
void square(double& num) {
    num = num * num;
    return square;
}

int main() {
    int integerNum = 5;
    double rationalNum = 2.5;

    square(integerNum);

    square(rationalNum);

    return 0;
}
