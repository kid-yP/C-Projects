// worksheet answers
#include <iostream>
using namespace std;

int main(){
	/*
	int Hour, Minute, Second;
	int only_seconds;
	
	cout<<"Enter Hours: ";
	cin>> Hour;
	
	cout<<"Enter Minute: ";
	cin>> Minute;
	
	cout<<"Enter second: ";
	cin>> Second;
	
	only_seconds = (Hour*3600) + (Minute*60) + Second;
	
	cout<<"The elapsed time in seconds: "<<only_seconds<<endl;
	return 0;
	*/
	int mtree(80), fptree(900), k;
	
	k = mtree++; //postfix increment
	cout<<"Value of k after assigned: "<<k<<endl;
	cout<<"Value of k after mtree++: "<<mtree<<endl;
	
	k = ++frtree; // prefix increment
	cout<<"value of k after assigned: "<<k<<endl;
	cout<<"Value of k after assigned frtree: "<<frtree<<endl;
	return 0;
}
