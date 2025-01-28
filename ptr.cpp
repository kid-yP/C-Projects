#include <iostream>

using namespace std;

int main()
{
	int babu, *ptr;
	int **ptrptr = &babu;
	ptr = &babu ;
	
	cout<<"Address 1: "<<&babu<<endl;
	
	cout<<"Address 2: "<<ptr<<endl;
	
	cout<<"Address 3: "<<&ptr<<endl<<endl;
	
	cout<<"Value 1: "<<babu<<endl;

	cout<<"Value 2: "<<*ptr<<endl;
	
	cout<<"Value 3:6 "
	return 0;
}
