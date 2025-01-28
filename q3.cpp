//Class exercise 1
#include <iostream>
using namespace std;

int main(){
	int numList, numbers, a = 1, sum = 0;
	char x;
	
	
	do{
		cout<<"Enter the list of numbers: "<<endl;
		cin>>numList;
	for( ;numList > 0; numList--){
		cout<<"Enter the number "<< a++<<": ";
		cin>>numbers;
		
		if(numbers % 3 == 0 || numbers % 7 == 0  ){
			numbers = 0;
		}
			sum += numbers;
	}
	cout<<"Sum of the numbers: "<<sum<<endl;
	
	cout<<"If you don't want to continue press N/n: "<<endl;
	cin>>x;
	cout<<endl;
	
	}while( !(x == 'n' || x == 'N' ) );
	return 0;
}
