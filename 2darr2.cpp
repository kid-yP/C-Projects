#include <iostream>
#include <string.h>

using namespace std;

int main()
{
char days[7][10] = {"Mon", "Tue", "Wed", "Thr", "Fri", "Sat", "Sun" };	
cout<<"The size of the first row: "<<strlen(days[0])<<endl;

for(int i = 0; i < 7; i++){
	cout<<days[i]<<" ";
}	

cout<<endl;

char my_weekend [7][10] = {{"Excellent"}, {}, {"Good"}, {"Bad"}};
cout<<"The size of the first row: "<<strlen(my_weekend[3])<<endl;


for(int j = 0; j < 7; j++){
	cout<<my_weekend[j]<<" ";
}
cout<<endl;

string math[12] = {"Jan", "Feb", "March", "April", "May", "June", "July" };
cout<<"The size of the first row: "<<math[2].size()<<endl;

for(int h; h < 12; h++){
	cout<<math[h]<<" ";
}	

return 0;	
}
