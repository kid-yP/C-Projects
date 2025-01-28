#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n, i;
	int total = 0;
	float average;
	
	cout<<"How many numbers: "<<endl;
	cin>>n;
	
	int temp[n];
	
	for(i = 0; i < n; i++){
		cout<<"Enter a number"<<endl;
		cin>>temp[i];
		total += temp[i];
	}
	
	average = (float)total / n;
	
	cout<<"Average: "<< average <<endl;
	return 0;
}
