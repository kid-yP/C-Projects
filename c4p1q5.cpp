#include <iostream>

using namespace std;

int main()
{
	string sl[5];
	sl[0]="Excellent"; 
	sl[1]="very good"; 
	sl[2]="Fair";
	sl[3]="poor";
	sl[4]="fail";
	int tm;
	
	cout<<"Total mark of the student: ";
	cin>>tm;
	
  	
	cout<<"You've scored a/an ";
	
	if(tm>=80){
		cout<<sl[0];
	}
	else if(tm>=60){
	cout<<sl[1];
	}
	else if(tm>=50){
	cout<<sl[2];
	}
	else if(tm>=40){
	cout<<sl[3];
	}
	else{
	cout<<sl[4];
	}
	cout<<" "<<"result!";
	return 0;
}
