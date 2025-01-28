#include <iostream>
using namespace std;
int main(){
	int n;
	float sum = 0;
	
	cout<<"How many numbers? ";
	cin>>n;
	
	float *ptr = new float[n];
	
	for(int i = 0; i < n; i++){
		cout<<(i+1)<<": ";
		cin>>*ptr;
		sum += *ptr;
	}
	
	cout<<"The mean of the numbers is: "<<sum/n<<endl;
	return 0;
}
