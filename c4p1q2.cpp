#include <iostream>

using namespace std;

int main(){
	int temp[8];
	int total = 0;
	
	cout<<"Enter the numbers: "<<endl;
	
	for(int i=0; i<8; i++){
		cin>>temp[i];
		total += temp[i];
	}
	double average = total/8;
	cout<<"The numbers are: "<<endl;
	for(int j=0; j<8; j++){
		cout<<temp[j]<<" ";
	}
	cout<<endl;
	cout<<"The average is: "<<average<<endl;
	return 0;
}
