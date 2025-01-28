#include <iostream>
using namespace std;

struct date{
	int day;
	int month;
	int year;
};

struct student{
	int roll_no;
	string name;
	float marks[5];
	date dob;
};

void info(student& student){
	cout<<"Enter roll number: ";
	cin>>student.roll_no;
	
	cin.ignore();
	cout<<"Enter the name of the student: ";
	getline(cin, student.name);
	
	cout<<"Enter the mark for each subject: ";
	for(int i = 0; i < 5; i++){
		cin>>student.marks[i];
	}
	
	cout<<"Enter the birthday date / month / year, space separated: ";
	cin>>student.dob.day >> student.dob.month >> student.dob.year;
	
};

double calcAverage(const student& student){
	int totalMarks = 0;
	for(int i = 0; i < 5; i++){
		totalMarks += student.marks[i];
	}
	return (double)totalMarks / 5;
}

void printD(const student& student, double average) {
    cout<<"Roll No: " << student.roll_no <<endl;
    cout<<"Name: " <<student.name<<endl;
    cout<<"Average Score: " << average <<endl;
    cout<<"Birth Date: " << student.dob.day << "/" << student.dob.month << "/" << student.dob.year <<endl;
    cout<<endl;
}

int main(){
	const int studNum = 2;
	student students[studNum];
	
	for(int i = 0; i < studNum; i++){
		cout<<"Enter the information of student "<<i + 1<<": "<<endl;
		info(students[i]);
	}
	
	for(int i = 0; i < studNum; i++){
		double average = calcAverage(students[i]);
		printD(students[i], average);
	}
	
	for(int i = 0; i < studNum; i++){
		double average = calcAverage(students[i]);
		if(average < 50){
			cout<<"students who score less than 50: "<<endl;
			printD(students[i], average);
		}
	}
	return 0;
}
