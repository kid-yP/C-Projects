#include <iostream>

using namespace std;

int main()
{
	int n;
	string password;
	string fName[n];
	float results[n][3];
	cout<<"Enter password: "<<endl;
	cin>>password;
	

	if(password == "kid11G"){	

	cout<<"Enter the number of students in a class: "<<endl;
	cin>>n;
	for(int i = 0; i < n; i++){
		cout<<"Enter the full name: "<<endl;
		cin>>fName[i];
		
		cout<<"Enter the mid exam result: "<<fName[i]<<" :";
		cin>>results[i][0];
		
		cout<<"Enter the final exam: "<<fName[i]<<" :";
		cin>>results[i][1];
		
		results[i][2] = results[i][0] + results[i][1];
		
		cout<<"**************************************";
		cout<<endl;
	}	
	}
	else{
			cout<<"You've entered the wrong password, Try again: "<<endl;
		}
	
	for(int i=0; i<n; i++){
		cout<<fName[i]<<"\t"<<results[i][0]<<"\t"<<results[i][1]<<"\t"<<results[i][2]<<"\t"<<endl;
	}
	
	return 0;
}
