#include <iostream>
#include <math.h>
#include <iomanip>
#include <fstream>
#include <cstring>
using namespace std;
/*

double max(double num1, double num2) {
  double result;
  
  if(num1 > num2) {
    result = num1; 
  }
  else if(num1 < num2){
    result = num2;
  }
  else{
  	cout<<"The inputs are equal!";
  }

  return result;
}

double max(double num1, double num2, double num3) {
  double result = num1;

  if(num2 > result) {
    result = num2;
  }

  else if(num3 > result) {
    result = num3;
  }
  else{
  	cout<<"The inputs are equal!";
  }
  return result;
}

int main() {
	double x, y, z;
	cout<<"Enter the value of x: ";
	cin>>x;
	cout<<"Enter the value of y: ";
	cin>>y;
	cout<<"Enter the value of z: ";
	cin>>z;

  cout << "Maximum of two numbers: " << max(x, y) << endl;

  cout << "Maximum of three numbers: " << max(x, y, z) << endl;

  return 0;
}
int square(int &x, int n){
	return pow(x, 2);
}  

double square(double &x, int n){
	return pow(x, 2);
}

int main(){
	int x;
	double y;
	cout<<"Enter an integer number: ";
	cin>>x;
	cout<<"Enter a double number: ";
	cin>>y;
	cout<<"The square of the integer number is: " << square(x, 2)<< endl;
	cout<<"The square of the double number is: " << square(y, 2)<< endl;
	return 0;
}
void calc(double x, double y, double &z){
	z = sqrt((x * x) - (y * y));
}

int main(){
	double a, b, c;
	cout<<"Enter side 1: ";
	cin>>a;
	cout<<"Enter side 2: ";
	cin>>b;
	calc(a, b, c);
	cout<<"The third side is equal to: "<< c ;
	
	return 0;
}

double calc(double n){
	if(n < 0){
		return n * n;
	}
	else{
		return sqrt(n);
	}
}
int main(){
	double x;
	cout<<"Enter an integer: ";
	cin>>x;
	double result = calc(x);
	cout<<"The result is: "<<result;
	return 0; 
}

using namespace std;

struct Stock {
    string name;
    double earningsPerShare;
    double priceToEarningsRatio;
    double anticipatedPrice;
};

void getStockData(Stock& stock) {
    cout << "Enter stock information:" << endl;
    cout << "Name: ";
    cin >> stock.name;
    cout << "Estimated earnings per share: ";
    cin >> stock.earningsPerShare;
    cout << "Estimated price-to-earnings ratio: ";
    cin >> stock.priceToEarningsRatio;

    stock.anticipatedPrice = stock.earningsPerShare * stock.priceToEarningsRatio;
}

void displayStockData(const Stock& stock) {
    cout << "Name: " << stock.name << endl;
    cout << "Estimated earnings per share: " << stock.earningsPerShare << endl;
    cout << "Estimated price-to-earnings ratio: " << stock.priceToEarningsRatio << endl;
    cout << "Anticipated stock price: $" << fixed << setprecision(2) << stock.anticipatedPrice << endl;
}

int main() {
    Stock stocks[5];

    for (int i = 0; i < 5; i++) {
        getStockData(stocks[i]);
        cout << endl;
    }

    for (int i = 0; i < 5; i++) {
        displayStockData(stocks[i]);
        cout << endl;
    }

    return 0;
}

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int rollNo;
    string name;
    int marks[5];
    Date BoD;
};

void getStudentData(Student& student) {
    cout << "Enter student information:" << endl;
    cout << "Roll number: ";
    cin >> student.rollNo;
    cout << "Name: ";
    cin.ignore();
    getline(cin, student.name);
    cout << "Birthday of date (day/month/year): ";
    cin >> student.BoD.day >> student.BoD.month >> student.BoD.year;
    cout << "Marks in five subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> student.marks[i];
    }
}

double computeAverageScore(const Student& student) {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += student.marks[i];
    }
    return static_cast<double>(sum) / 5;
}

void displayStudentData(const Student& student, double averageScore) {
    cout << left << setw(15) << student.rollNo;
    cout << setw(20) << student.name;
    cout << setw(10) << student.BoD.day;
    cout << setw(10) << student.BoD.month;
    cout << setw(10) << student.BoD.year;
    cout << setw(10) << averageScore;
    cout << endl;
}

int main() {
    Student students[3];

    for (int i = 0; i < 3; i++) {
        getStudentData(students[i]);
        double averageScore = computeAverageScore(students[i]);
        if (averageScore < 50) {
            displayStudentData(students[i], averageScore);
        }
    }

    cout << endl;
    cout << left << setw(15) << "Roll Number" << setw(20) << "Name" << setw(10) << "Birthday" << setw(10) << "Month" << setw(10) << "Year" << setw(10) << "Average Score" << endl;
    cout << string(55, '-') << endl;

    for (int i = 0; i < 3; i++) {
        double averageScore = computeAverageScore(students[i]);
        displayStudentData(students[i], averageScore);
    }

    return 0;
}



class triangle{
	double s1, s2, s3;
	public:
	void triangle(double a, double b, double c){
		side1 = a;
		side2 = b;
		side3 = c;
	}
	void area(){
		
	}
};
class area{
	private: 
		double length, width;
	public:
		void setDim(double x, double y){
			length = x;
			width = y;
		}
		double getArea(){
			return length * width;
		}
};

int main(){
	double a, b;
	cout<<"Enter the lenght of the rectangle: ";
	cin>>a;
	cout<<"Enter the width of the rectangle: ";
	cin>>b;
	area rect;
	rect.setDim(a, b);
	double area = rect.getArea();
	cout<<"the area is: "<< area;
	
	return 0;
}

struct stock{
	string name;
	double ear;
	double pte;
	double totalp;
};
void enter(stock& s){
		cout<<"The name of company is: "<<endl;
		cin>>s.name;
		cout<<"Enter the earnings per price "<< endl;
		cin>>s.ear;
		cout<<"Enter the price to earnings "<<endl;
		cin>>s.pte;
		s.totalp = s.ear * s.pte;
	}

void display(const stock s){
		cout<<"The name company, earnings, price to earnings, and total price of is: "<<s.name<<" "
		<<s.ear<<" "<<s.pte<<" "<<s.totalp<<endl;	
}
int main(){
	stock stocks[3];
	for(int i = 0; i < 3; i++){
		enter(stocks[i]);
	}
	for(int i = 0; i < 3; i++){
		display(stocks[i]);
	}
	return 0;	
 }
int main(){
	ifstream file("clients.txt", ios::in);
	if(!file.is_open()){
		cout<<"File not succesfully opened.";
		exit(1);
	}
	string name;
	int account;
	double balance;
	char ch = 'y';
	cout<<"Enter the name, account and balance with space separated:"<<endl;
	cout<<"Enter the character 'y' to end input"<<endl;
	while(inClientFile.eof() == false){
		file>> name >> account >> balance;
		cout<< name << " "<<account <<" "<< balance;
	}
	file.close();
return 0; 
}


int main(){
char str[80], ans = 'y'; 
ofstream outfl("Tryyy.txt", ios::out);
 
	do{
		cout<<"please give the string : "; 
		outfl<<str;
		gets(str);
		cout <<"do you want to write more...<y/n> : "; 
		cin>>ans;
	}while(ans == 'y'); 
	
	outfl<<'\0'; 
	outfl.close();

return 0;
}
int main(){
	ifstream infl("lie.txt", ios::in);
	ofstream out("cock.txt", ios::out);
	cout <<"reading from created file and copying to other file\n";
	char c, d;
	infl.get(c); 
	if(!infl.is_open()){
    	cout<<"File is not opened succesfully"<<endl;
		exit(1);
	}
	
	do{     
		d=c+1;
		cout<<c<<d<<'\n'; 
		out.put(d);
		infl.get(c);
	}while (c!='\0'); 
	
	out<<'\0'; 
	infl.close(); 
	out.close();

return 0;
}


struct Student{
int roll;
char name[25];
float marks;
} stud;
void getdata(){
cout<<"\n\nEnter Roll : ";
cin>>stud.roll;
cout<<"\nEnter Name : ";
cin>>stud.name;
cout<<"\nEnter Marks : ";
cin>>stud.marks;
}
void AddRecord(){
fstream outf;
outf.open("Students.txt",ios::app|ios::binary);
getdata();
outf.write( (char *) &stud, sizeof(stud) );
outf.close();
}
int main()
{
char ch ='n';
do{
AddRecord();
cout<<"\nwant to add more (y/n) : ";
cin>>ch;
} while(ch=='y' || ch=='Y');
cout<<"\nData written successfully...";
return 0;
}

struct Student{
int roll;
char name[25];
float marks;
} stud;
void putData()
{
cout<<"\n"<<stud.roll;
cout<<"\t"<<stud.name;
cout<<"\t"<<stud.marks;
}
void Display(){
fstream inf;
inf.open("Student.dat",ios::in|ios::binary);
cout<<"\n\tRoll\tName\tMarks\n";
inf.read( (char *) &stud, sizeof(stud) );
while(inf != NULL){
putData();
inf.read( (char *) &stud, sizeof(stud) );
}
inf.close();
}

int main() {
Display ();
return 0;
}



struct stud{
	int roll;
	char name[50];
	int marks;
}stud;
void getdata(){
	cout<<"name: ";
	cin>>stud.name;
	cout<<"roll: ";
	cin>>stud.roll;
	cout<<"marks: ";
	cin>>stud.marks;	
}
void display(){
	fstream infile;
	infile.open("student.txt", ios::app|ios::binary);
	infile.write((char*)&stud, sizeof(stud));
	char ch = 'n';
	do{
	getdata();
	infile.write((char*)&stud, sizeof(stud));
	cout<<"do you want to continue (y/n)?";
	cin>>ch;
	}while(ch == 'y'||'Y');
	infile.close();
}
int main(){
	display();
	return 0;
}



int main() {
int a = 21, c ;
c = a++; //postfix increment 
cout<<"Value of c after assigned a++ is :"<<c<<endl;
cout<<"Value of a is after a++:" << a << endl ;
c = ++a; //prefix increment 
cout <<" Value of c after assigned ++a is :"<<c<<endl;
cout<<" Value of a is after ++a:" << a << endl ;
return 0;
}


int factorial(int y){
	int n = 1;
	for(int i = 1; i <= y; i++){
		n = n * i;
	}
	return n;
}
double fibonacci(double y){
	if(y > 0){
		return fibonacci(y-1) + fibonacci(y-2);
	}
}
int main(){
	int x;
	cout<<"Enter a number: ";
	cin>>x;
	int result = factorial(x);
	cout<<"The factorial of the nubmer is "<<result<<endl;
	double result2 = fibonacci(x);
	cout<<"The fibaonacci of the number is "<<result2<<endl;
	return 0;
}

struct employee{
	int number;
	string name;
	double rate, hours;
};

template <typename T>
T getdata(T emp, int size){
	for(int i = 0; i < size; i++){
		cout<<"Enter the info: ";
		
		cout<<"number: ";
		cin>>emp[i].number;
		
		cin.ignore();
		cout<<"Name: ";
		getline(cin, emp[i].name);
		
		cout<<"rate: ";
		cin>>emp[i].rate;
		
		cout<<"hours: ";
		cin>>emp[i].hours;
	}
}

template <typename U>
U calculateDis(U emp[], int size, ofstream &file){
	for(int i = 0; i < size; i++){
		file<<" Number "<<" Name "<<" Gross pay "<<" Pension "<<endl;
		double tax = 0.15, pension = 0.07; 
		double grosspay = emp[i].rate * emp[i].hours * 80;
		double netpay = grosspay - tax - pension;
		file<<emp[i].number<<emp[i].name<< grosspay << netpay;	
	}
}

int main(){
	employee s[3];
	getdata(s, 3);
	ofstream file("report.txt");
	calculateDis(s, 3, file);
	cout<<"File has been written succesfully!";
	return 0;
}

*/

















































































































