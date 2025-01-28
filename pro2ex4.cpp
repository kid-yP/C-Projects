#include <iostream>
using namespace std;

struct stock{
	string name;
	float eps;
	float pte;
};

int main(){
	stock d1[3];
	
	for(int i = 0; i < 3; i++){
	cout<<"Enter the name of stock # "<<i + 1<<" ";
	getline(cin, d1[i].name);
	cout<<"Enter the esimated earnings per share of stock # "<<i + 1<<" ";
	cin>>d1[i].eps;
	cout<<"Enter the  estimated price-to-earning ratio of stock #"<<i + 1<<" ";
	cin>>d1[i].pte;
	
	double anticipatedPrice = d1[i].eps * d1[i].pte;
	cout<<"The anticipated price of "<<d1[i].name<<" is "<<anticipatedPrice<<endl;
	}
	
	return 0;
}
