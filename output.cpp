#include <iostream>

using namespace std;

int main(){
	float mark[5];
	
	cout<<"Enter mark: "<<endl;

	cout<<endl;
    //&means address of	
	cout<<"Address: "<<&mark<<endl;
	cout<<"Adress 2: "<<&mark + 1<<endl;
	cout<<"Adress 3: "<<&mark + 2<<endl;
	
	return 0;
}                             
