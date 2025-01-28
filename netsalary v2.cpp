//calculate the net salary
#include <iostream>

using namespace std;
int main(){
	float Net_salary, gross_salary, worked_hours, tax_rate, overtime_bonus, pension, income_tax, overtime_payment;
	float const pension_rate = 0.07;
	
	cout<<"Read the Gross salary: "<<endl;
	cin>>gross_salary;
	
	cout<<"Read the Worked hours: "<<endl;
	cin>>worked_hours;

    pension = pension_rate * gross_salary;

	if( worked_hours > 40){
		cout<<"Enter the over time payment rate: "<<endl;
		cin>>overtime_bonus;
		overtime_payment = (worked_hours - 40) * overtime_bonus;
	} 
	
	gross_salary += overtime_payment;
	
	if( gross_salary<=200)
	{
		tax_rate = 0.0;
	}
	else if( gross_salary<=600)
	{
		tax_rate = 0.01;
	}
	else if( gross_salary<=1200)
	{
		tax_rate = 0.15;
	}
	else if( gross_salary<=2000)
	{
		tax_rate = 0.2;
	}
	else if( gross_salary<=3500)
	{
		tax_rate = 0.25;
	}
    else
	{
		tax_rate = 0.3;
	}
	gross_salary -= pension;				
	income_tax = tax_rate * gross_salary;
	Net_salary = gross_salary - income_tax;
	cout<<"Print the Net salary: "<<Net_salary<<endl;
	return 0;
}
