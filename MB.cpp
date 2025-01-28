//C++ program that calculates how long it take to send a file
#include <iostream>
using namespace std;

int main(){
	float Filesize;
	
	cout<<"Read the file size in bytes: "<<endl;
	cin>> Filesize;
	
	cout<<"The time it takes is: "<< Filesize/(sizeof(char) * 960)<<endl; 
	return 0;
}
