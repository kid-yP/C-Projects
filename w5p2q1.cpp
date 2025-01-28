#include <iostream>
#include <string.h>
#include <ctype.h>

using namespace std;

int main(){
	int vowel_count = 0, i;
	string name;
	
	cout<<"Enter your name: "<<endl;
	cin>>name;
	
	for(i = 0; name[i]; i++){
		name[i] = tolower(name[i]);
		if(name[i] == 'a' || name[i] =='e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
		vowel_count++;
	}
	cout<<"There are "<<vowel_count<<" vowels"<<endl;
	// 4 16 52 9
	// 416,529
	return 0;
}
