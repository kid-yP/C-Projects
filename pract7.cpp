#include <iostream> 
#include <fstream>
#include <string.h> 
#include <vector>
using namespace std;
/*
int main(){
ifstream inClientFile( "clients(2).txt", ios::in); 

if ( !inClientFile.is_open()) {
cout << "File could not be opened" << endl; 
exit( 1 );
} 

int account;
char name[30];
double balance;

cout << "The User bank account details\n";
cout<< "Account\tName\tBalance\n ";

while (inClientFile.eof() == false)
{
inClientFile >> account >> name >> balance;
cout<< account << '\t' << name << '\t' << balance<< endl; 
}

inClientFile.close(); 

return 0; 
} 


int main(){

char str[80], c, d, ans ; 
ofstream outfl("try.txt");

// read a string from keyboard and write to a file. 
do{

cout<<"please give the string : "; 
gets(str); 
outfl<<str;
cout <<"do you want to write more...<y/n> : "; 

}while(ans == 'y'); 

outfl<<'\0'; 
outfl.close();
return 0;
}

int main(){
char c, d;	
// copying file content using get() and put() functions
ifstream infl("try.txt");
ofstream out("cod.dat");
cout <<"reading from created file and copying to other file\n";
infl.get(c); 
do{

d=c+1;
cout<<c<<d<<'\n'; 
infl.get(c);
out.put(d);

}while (c =='\0'); 
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
	cout<<"\nEnter Roll : ";
	cin>>stud.roll;
	cout<<"\nEnter Name : ";
	cin>>stud.name;
	cout<<"\nEnter Marks : ";
	cin>>stud.marks;
}

void AddRecord(){
	fstream outf;
	outf.open("Student.dat",ios::app|ios::binary);
	getdata();
	outf.write( (char *) &stud, sizeof(stud) );
	outf.close();
}

int main()
{
	char ch = 'n';

do{
	AddRecord();
	cout<<"\n want to add more (y/n) : ";
	
} while(ch=='y' || ch=='Y');

cout<<"\nData written successfully...";

return 0;
}

struct student{
	int roll_no;
	char name[25];
	double marks;
}stud;

void putData(){
	cout<<"\n"<<stud.roll_no;
	cout<<"\t"<<stud.name;
	cout<<"\t"<<stud.marks;
}

void display(){
	fstream inf;
	inf.open("student.dat",ios::in |ios::binary );
	cout<<"\nRoll_no \t Name \t Marks\n";
	inf.read((char*) &stud, sizeof(stud));
	while(inf != NULL){
		putData();
		inf.read((char*) &stud, sizeof(stud));
	} 
	inf.close();
}

int main(){
	display();
	return 0; 
}


struct Student{
	int rollno;
	char name[25];
	float marks; 
	char grade;
} stud1, stud;

void getData(){
	cout<<"Student Info:\n";
	cout<<"Rollno: "; cin>>stud1.rollno;
	cout<<"Name: "; cin>>stud1.name;
	cout<<"Marks: "; cin>>stud1.marks;
	float marks = stud1.marks;
	if(marks>=75) {stud1.grade = 'A'; }
	else if(marks>=60){stud1.grade = 'B'; }
	else if(marks>=50){stud1.grade = 'C'; }
	else if(marks>=40){stud1.grade = 'D'; }
	else{ stud1.grade = 'F'; }
} 

int getrno(){
	return stud1.rollno;
}

void putdata(){
	cout<<"Rollno: "<<stud1.rollno;
	cout<<"\tName: "<<stud1.name<<"\n";
	cout<<"Marks: "<<stud1.marks;
	cout<<"\tGrade: "<<stud1.grade<<"\n";
}

void modify(){
	cout<<"Rollno: "<<stud1.rollno<<"\n";
	cout<<"Name: "<<stud1.name;
	cout<<"\tMarks: "<<stud1.marks<<"\n";
	cout<<"Enter new details.\n";
	char nam[20]=" ";
	float mks;
	cout<<"New name:(Enter '.' to retain z old): ";
	cin>>nam;
	cout<<"New marks:(Press -1 to retain z old):";
	cin>>mks;
	if((nam, '.' ) != 0){
	strcpy(stud1.name, nam);
}

if(mks != -1){
	stud1.marks = mks;
	if(stud1.marks>=75){stud1.grade = 'A';}
	else if(stud1.marks>=60){stud1.grade = 'B';}
	else if(stud1.marks>=50){stud1.grade = 'C';}
	else if(stud1.marks>=40){stud1.grade = 'D';}
	else{ stud1.grade = 'F'; }
}
}

int main(){
	
	fstream fio("marks.dat", ios::in | ios::out);
	char ans='y';

while(ans=='y' || ans=='Y'){
	getData();
	fio.write((char *)&stud1, sizeof(stud1));
	cout<<"Record added to the file\n";
	cout<<"\nWant to enter more ? (y/n)..";
	cin>>ans;
}
 
int rno; long pos; char found='f';
}

cout<<"Enter rollno of student whose record is to be modified: ";
cin>>rno;

fio.seekg(0);
int size = sizeof(stud1);

while(!fio.eof()){
	pos = fio.tellg();
	fio.read((char *)&stud1, size);

if(getrno() == rno){
	modify();
	fio.seekg(pos);
	fio.write((char *)&stud1, size);
	found = 't';
	break;
}
}

if(found=='f'){
	cout<<"\nRecord not found in the file..!!\n";
	cout<<"Press any key to exit...\n";
	exit(2);
}

fio.seekg(0);
cout<<"Now the file contains:\n";

while(!fio.eof()){
	fio.read((char *)&stud, size);
	stud.putdata();
}

fio.close();
return 0;
}

#include <iostream>
#include <vector>

using namespace std;

template <typename T>
bool palindrome(vector<T>& vec) {
    int size = vec.size();
    for (int i = 0; i < size / 2; i++) {
        if (vec[i] != vec[size - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> vec2 = {1, 2, 3, 4};
    vector<int> vec1 = {1, 2, 3, 2, 1};
    cout << "Is vec1 a palindrome? " << (palindrome(vec1) ? "Yes" : "No") << endl;
    cout << "Is vec2 a palindrome? " << (palindrome(vec2) ? "Yes" : "No") << endl;

    return 0;
}
*/

#include <map>

using namespace std;

int main() {

  vector<int> numbers;
  ifstream file("numbers.txt");



  map<int,int> freq;

  for(int i=0; i<numbers.size(); i++) {
    freq[numbers[i]]++; 
  }

  int frequent = 0, nonfrequent = 0;

  for(int i=0; i<numbers.size(); i++) {
    if(freq[numbers[i]] > 1) {
      frequent = numbers[i];
      break;
    }
  }

  for(int i=0; i<numbers.size(); i++) {
    if(freq[numbers[i]] == 1) {
      nonfrequent = numbers[i];
      break; 
    }
  }

  cout << "First frequent element is: " << frequent << endl;
  cout << "First non-frequent element is: " << nonfrequent << endl;

  return 0;
}










