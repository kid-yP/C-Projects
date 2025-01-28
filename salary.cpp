//C++ program that finds the employees gross-salary, net salary and bonus payment
#include <iostream>
#include <string.h>

using namespace std;

int main(){
	float Hour, Bonus, Base, Tax_rate, Pension, Gross_salary, Net_salary, Bonus_payment;
	string Name;
	
	cout<<"Read the name of the employee: "<<endl;
	cin>> Name;
	
	cout<<"Read the Weekly working hour: "<<endl;
	cin>> Hour;
	
	cout<<"Read the Bonus rate per hour: "<<endl;
	cin>> Bonus;
	
	cout<<"Read the Base salary: "<<endl;
	cin>> Base;
	
    Gross_salary = (Bonus * Hour) + Base;
	Tax_rate = 0.15 * Gross_salary;
	Pension = 0.05 * Gross_salary;
	Net_salary = Gross_salary - Tax_rate - Pension;
	Bonus_payment = Bonus * Hour; 
	
	cout<<"Hello "<<Name<<endl;
	cout<<"Your Gross salary is: "<<Gross_salary<<endl;
	cout<<"Your Net_salary is: "<<Net_salary<<endl;
	cout<<"Your Bonus_payment is: "<<Bonus_payment<<endl;
	
	return 0;
	}
