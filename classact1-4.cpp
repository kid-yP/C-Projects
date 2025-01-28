//class activity 1.4
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	float num, total, average, variance, sd, count;
	
	do {
		cout<<"Enter the numbers: "<<endl;
		cin>>num;
		count+=1;
		total+=num; 
	}while(num != 0);
	
	cout<<total<<endl;
	
	average = total/count;
	
	cout<<"the average is equal to "<<average<<":"<<endl;
	
	return 0;
}
