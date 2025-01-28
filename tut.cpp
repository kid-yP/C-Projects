//calculationg factorial using for loop
/*
#include <iostream>

int main()
using namespace std;
{  int Rnumber;

   cout<<"Enter a random number: "<<endl;
   cin>>Rnumber;

   int factorial = 1;
   
   for(int i=1; i <= Rnumber; i++){
   	   factorial *= i;
   }
   
   cout<<"The factorial of the random number is: "<< factorial <<endl;
	
	return 0;
}*/

//calculating using while loop 
/*
int Rnumber; 
int factorial = 1;
cout<<"Enter a random number: "<<endl;
cin>>Rnumber;


while(Rnumber>0)
{
	factorial *= Rnumber;
	Rnumber--;
}
cout<<"The factorial of the random number is: "<<factorial<<endl;

return 0;
}*/
/*
#include <iostream>

using namespace std;

int main()
{
	int Rnum, factorial = 1;
	
	cout<<"Enter a random number: "<<endl;
	cin>>Rnum;
	
	do
	{
		if(Rnum <= 0)
		break;
		
		factorial *= Rnum;
		Rnum--;
	}while(Rnum > 0);
	
	cout<<"The factorial of the random number is: "<<factorial<<endl;
	
	return 0;
}*/

// write a program that read a list of number and compute the sum of even numbers and the product of the odd numbers.
// The user input the numbers one by one and  press 's when it get done.
/*
#include <iostream>

using namespace std;

int main(){
*/
/*	
int Lnum, sum = 0, product = 1;
char stop;


do{
cout<<"Enter the list of numbers: "<<endl;
cin>>Lnum;

if(Lnum % 2 == 0){
	sum += Lnum;
}
else{
	product *= Lnum;
}	

		cout<<"Enter 's/S to stop: "<<endl;
		cin>>stop;
}while(stop != 's' || stop != 'S');

cout<<"The sum of the even numbers is: "<<sum<<endl;

cout<<"The product of the odd numbers is: "<<product<<endl;
*/
/*#include <iostream>
using namespace std;

int main() 
{
  int sum = 0, product = 1;
  char letter; 
  
  
  for (; letter != 'q';) { 
    int x;
    cout << "Enter a number: ";
    cin >> x;
    
	if (x % 2 == 0) { 
      sum += x; 
    }
    else { 
      product *= x; 
    }
    cout << "Enter 'q' to quit or any other letter to continue: ";
    cin >> letter;
  }
  cout << "The sum of even numbers is " << sum << endl;
  cout << "The product of odd numbers is " << product << endl;
  return 0;
}*/


#include <iostream>
using namespace std;

int main() {
  int sum = 0, product = 1;
  char letter; 
  
  cout << "Enter a list of numbers and press 's/S' when you are done: "<<endl;
  
  for (;;) { 
    int x; 
    cin >> x; 
    
	if (cin.fail()) { 
      cin.clear(); 
      cin >> letter; 
      
	  if (letter == 's' || letter == 'S') {
        break; 
      }
      else { 
        cout << "Invalid input. Please enter a number or 's/S' to stop: ";
        continue; 
      }
    }
    if (x % 2 == 0) { 
      sum += x; 
    }
    else { 
      product *= x; 
    }
  }
  cout << "The sum of even numbers is " << sum << endl;
  cout << "The product of odd numbers is " << product << endl;
  return 0;
}


