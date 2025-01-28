#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int i, n, h = 0;
	
	cout<<"How many numbers do you want to enter: "<<endl;
	cin>>n;
	
	int nums[n]; 
	int dnums[n/2];
	
	for(i = 0; i < n; i++){
		cout<<"Enter the numbers: ";
		cin>>nums[i];
		
		if(i % 2 == 0){
			dnums[h] = nums[i] * 2;
			h++;
		}
	}
	
	for(i = 0; i <= n/2; i++){
		cout<<dnums[i]<<" ";
	}
	
	return 0;
}
