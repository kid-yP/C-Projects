//My weekend rating
#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int weekend_rating[7] = {75, 50, 50, 50, 75, 100, 100};
	string word="chill";
	string weekend_rating2[7]={
	   "Friday night was 75",
	   "saturday morning was 50",
	   "saturday afternoon was 50",
	   "saturday evening was 50",
	   "sunday morning was 75",
	   "sunday afternoon was 100",
	   "sunday evening was 100",
	};
	
	for(int i=0; i<7; i++){
		cout<<weekend_rating2[i]<<endl;
	}
	
	cout<<endl;
	
	cout<<"MY weekend overall was "<<word<<"!"<<endl;
	
	cout<<"Friday night was: "<<weekend_rating[0]<<"%"<<endl;
	cout<<"saturday morning was: "<<weekend_rating[1]<<"%"<<endl;
	cout<<"saturday afternoon was: "<<weekend_rating[2]<<"%"<<endl;
	cout<<"saturday evening was: "<<weekend_rating[3]<<"%"<<endl;
	cout<<"sunday morning was: "<<weekend_rating[4]<<"%"<<endl;
	cout<<"sunday afternoon was: "<<weekend_rating[5]<<"%"<<endl;
	cout<<"sunday evening was: "<<weekend_rating[6]<<"%"<<endl;
	
	for(int i=0; i<=6; i++){
		cout<<weekend_rating [i]<<endl;
	}
	
	cout<<weekend_rating [4];
	
	char weekend_word [] = {'c', 'h', 'i', 'l', 'l'};
	cout<<endl;
	cout<<weekend_word<<endl;
	
	
	/*
	The difference between 
	/*
	-An array elements are accessed only by using its index. The array index ranges from 
	0 to n-1, where n is the lenght of the array.
	
	-The square bracket is used into contex with array. 
	a, to specify the array element size/length.
	b,to indicate or access a particular array element.
	
	-For loop is the most commmon looping statment that is used for accessing or manipulating array element. */
	
	return 0;
}
