#include <iostream>
using namespace std;

int main() {
/*    float myFloat = 3.14;
    float* floatPtr = &myFloat;

    cout << "Value stored in the float variable: " << *floatPtr <<endl;

int i=5, j=10; 
int *ptr, **pptr;
ptr = &i;
pptr = &ptr;

cout<<*ptr++<<" "<<ptr<<endl; 
cout<<*(ptr++)<<" "<<ptr<<endl;
 


*/
int mark[5];

for(int i =0; i < 5; i++){
	cout<<"Enter the mark of the student#: ";
	cin>>mark[i];
}

for(int i = 0; i < 5; i++){
	int k = 1 + i;
	cout<<"The mark of the student # "<<k<<" is: "<<mark[i]<<endl;
}


int *ptr = mark, i = 0;
while(i < 5){
	
	cout<< *(ptr++)<<endl;
	i++;
	
}
    return 0;
}


