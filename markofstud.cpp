#include <iostream>

using namespace std;

int main(){
	int count;
	while(count <= 3){
	
	float Tmark, Mmark, Fmark;
	
	if(count != 0){
		cout<<"You've entered the wrong number, try again: "<<endl;
	}
	
	cout<<"Enter the mid exam [0-40] result: "<<endl;
	cin>>Mmark;
		
	cout<<"Enter the final exam [0-60] result: "<<endl;
	cin>>Fmark;
		
	if(Mmark < 0 || Fmark < 0 || Mmark > 40 || Fmark > 60){
		count += 1;
		continue;
	}
	Tmark = Mmark + Fmark;
		
	if(Tmark >= 90){
		cout<<"Letter Grade: A+"<<endl;
	}else if(Tmark >= 80){
		cout<<"Letter Grade: A"<<endl;
	}else if(Tmark >= 75){
		cout<<"Letter Grade: B+"<<endl;
	}else if(Tmark >= 60){
		cout<<"Letter Grade: B"<<endl;
	}else if(Tmark >= 55){
		cout<<"Letter Grade: C"<<endl;
	}else if(Tmark >= 45){
		cout<<"Letter Grade: C+"<<endl;
	}else if(Tmark >= 30){
		cout<<"Letter Grade: D"<<endl;
	}else{
		cout<<"Letter Grade: F"<<endl;
	}
	break;
	}	
	return 0;
}
