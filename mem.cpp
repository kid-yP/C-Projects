#include <iostream>

using namespace std;

int main(){
	/*float *ptr = new float;
	cout<<"Please enter salary: ";
	cin>>*ptr;
	cout<<"Your salary is: "<<*ptr<<endl;
	delete ptr;
	cout<<"\n Value: "<<*ptr<<endl;  //print garbage data
	
	ptr = new float;
	cout<<"Enter mark: ";
	cin>>*ptr;
	cout<<"Your mark is: "<<*ptr<<endl; */
	int n;
	cout<<"How many students? ";
	cin>>n;
	
	int *marks = new int[n];
	cout<<"Input grade for student\n";
	for(int i=0; i<n; i++){
		cout<<(i+1)<<":";
		cin>>marks[i];
	} 
	
	delete [] marks;   //deallocation of memory pointed by marks
	
	cout<<"1st Mark is: "<<*marks<<endl;    //print garbage data
	marks=0; //reset the point to null
	
	return 0;
}
