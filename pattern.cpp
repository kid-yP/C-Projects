//Patterns
#include<iostream>

using namespace std;
int main(){

    int m, s;
	do{
    cout<<"Enter 1 for a Star half pyramid: "<<endl;
    cout<<"Enter 2 for a star rectangle: "<<endl;
    cout<<"Enter 3 for a Star half down pyramid: "<<endl;
    cout<<"Enter 4 for a Number half pyramid: "<<endl;
    cout<<"Enter 5 for a Number rectangle: "<<endl;
    cout<<"Enter 6 for a Number half inverted pyramid: "<<endl;
    cout<<"Enter 7 for a Star pyramid: "<<endl;
    cin>>m;
    
	switch(m){
	case 1:
		for(int i = 0; i < 5; i++){
		
		for(int j = 0; i >= j; j++){
			cout<<"*";           //star half pyramid
		}
		cout<<endl;
    	}
		break;
	case 2:
		for(int k = 0; k < 5; k++){
		
		for(int h = 0; h < 5; h++){
			cout<<"*";           //star rectangle
		}
		cout<<endl;
	    }
		break;
	case 3:
	 	for(int i = 5; i > 0; i--){
		
		for(int j = 0; j < i; j++){
			cout<<"*";           //star down pyramid
		}
		cout<<endl;
		}	
		break;
	case 4:
		for(int k = 1; k <= 5; k++){
		
		for(int h = 1; h <= k; h++){
		
		cout<< h <<" ";          //number half pyramid
		}
		cout<<endl;
		}
		break;
	case 5:	
		for(int i = 1; i <= 5; i++){
		
		for(int j = 1; j <= 5; j++){
			cout<< j <<" ";       //number rectangle
		}
		cout<<endl;
		}
		break;
	case 6:
		for(int k = 5; k >= 1; k--){
		
		for(int h = 1; h <= k; h++){
			cout<< h <<" ";         //number half inverted pyramid
		}
		cout<<endl;
		}
		break;
	case 7:
		for(int j = 1; j <= 9; j += 2){
			
			for(int k = 9; j < k; k-=2){
				
				cout << " ";
				
			}
			
			for(int i = 1; i <= j; i++){
				
				cout<< "*";
				
			}
			cout << endl;
		}
	default: 
		cout<<"You have entered the wrong number"<<endl;
	}
	cout<<"If you want to terrminate the program type 0"<<endl;
	cin>> s;
	}while(s);
	
	return 0;
}

