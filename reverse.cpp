//playing with numbers
#include<iostream>

using namespace std;
int main(){
	int num, temp, reverse = 0, counter = 0, sum;

	cout<<"Enter the number: "<<endl;
	cin>>num;
	
	while(num > 0){
		temp = (num % 10);
		reverse = (reverse * 10) + temp;
		num = num / 10;
		counter++;
		sum = temp + sum;
	}
	cout<<"The reversed number is: "<<reverse<<endl;
	cout<<"The number of digit is: "<<counter<<endl;
	cout<<"Result of their sum is: "<<sum<<endl;
	return 0;
}
