#include <iostream>
using namespace std;
/*
void calc(double num1, double num2, double num3, double &s, double &pro){
	s = num1 + num2 + num3;
	pro = num1 * num2 * num3;
	return;
}

int main(){
	double x = 6;
	double y = 8;
	double z = 10;
	double sum, product;
	calc(x, y, z, sum, product);
	cout<<"The sum of the numbers is: "<<sum<<endl;
	cout<<"The product of the numbers is: "<<product;
	return 0;
}
void swap(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int main(){
	int n = 10;
	int m = 20;
	cout<<"The numbers before were: "<<n<<" and "<<m<<endl;
	swap(n, m);
	cout<<"The swaped numbers are: "<<n<<" and "<<m;
	return 0;
}

void func(int);
int m2;

int main(){
	int m1;
	m1 = 1; m2 = 21;
	func(m1);
	cout<<m1<<" "<<m2<<endl;
	return 0;
}

void func(int a){
	int m2;
	m2 = a + 9; a++;
	cout<<a<<" "<<m2<<", ";
}

struct Person {
string name;
int age;
float salary;
};

Person getData(Person &p) {
cout << "Enter Full name: ";
getline(cin, p.name);
cout << "Enter age: ";
cin >> p.age;
cout << "Enter salary: ";
cin >> p.salary;

return p;
}

void displayData(Person p) {
cout << "\nDisplaying Information.\n" ;
cout << "Name: " << p.name << endl;
cout <<"Age: " << p.age << endl;
cout << "Salary: " << p.salary;
}

int main() {
Person P1, P2;
P2 = getData(P1);
displayData(P1);
return 0;
}
*/

struct Pixels{
string color;
int style;
};


Pixels readPoint(){
Pixels myPoint;

cout<<"What is the pixel color: "; 
getline(cin, myPoint.color);

cout<<"What is the pixel style: "; 
cin>>myPoint.style;

return myPoint;
}

void showPoint(Pixels P, int n){
cout<<"\n\nThe "<<n<<" point Color & STyle\n";
cout<<P.color<<"\t"<<P.style << endl;
}

int main(){

Pixels Point1 = readPoint();
showPoint(Point1, 1);
Pixels Point2 = Point1; 
Point1.color += 2;
showPoint(Point2, 2); 
showPoint(Point1, 1);

return 0;
}
















