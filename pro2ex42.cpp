#include <iostream>
#include <string>
using namespace std;

struct customer{
	string name;
	int accNum;
	float balance;
};

void lesser(customer user[], int size){
	cout<<"Customer with lesser than 200$ is/are: "<<endl;
	for(int i = 0; i < size; i++){
		if(user[i].balance < 200){
			cout<<user[i].name<<endl;
		}
	}
}

void gr(customer user[], int size){
	cout<<"Customer with greater than 1,000$ is/are: "<<endl;
	for(int i = 0; i < size; i++){
		if(user[i].balance > 1000){
			user[i].balance += 100;
			cout<<user[i].name<<" with "<<user[i].balance<<endl;
		}
	}
}

int main(){
	const int  Num_cust = 2;
	customer user[Num_cust];
	for(int i = 0; i < Num_cust; i++){
	
		cout<<"Enter the name of person #"<<i + 1<<": ";
		cin>>user[i].name;
		
		cout<<"Enter the account number of person #"<<i + 1<<": ";
		cin>>user[i].accNum;
		
		cout<<"Enter the balance of person #"<<i + 1<<": ";
		cin>>user[i].balance;
	}
	
	lesser(user, Num_cust);	
	gr(user, Num_cust);
	
	return 0;
}


