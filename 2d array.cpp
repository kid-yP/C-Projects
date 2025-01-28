//Write the segment code given below and print the elements of the 2D
#include <iostream>

using namespace std;

int main()
{
	float mark [3][4] = {60, 73.5, 57.25, 80, 41.8, 67, 89, 54};
	
	cout<<"The size of the first array is: "<<sizeof (mark)/4<<endl;
	
	cout<<"The list of first array's element is as follows: ";
	
	for(int i=0; i < 3; i++){
		
		for(int j=0; j < 4; j++){
			cout<<mark [i][j]<<" ";
		}
	}
	
	cout<<endl;
	
	int age [3][4] = {{26, 37, 16}, {24, 20, 18, 48}, {60, 33, 80}};
	
	cout<<"the list of the first size of age is: "<<sizeof (age)/4<<endl;
	
	cout<<"The list of second size of element is: ";
	for(int k=0; k < 3; k++){
		
		for(int h=0; h < 4; h++){
			cout<<age [k][h]<<" ";
		}
	}
	
	return 0;
}
