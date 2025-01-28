#include <iostream>
using namespace std;

template <typename T1, typename T2>
double floatingPointDivide(T1 numerator, T2 denominator) {
    return numerator / denominator;
}

int main() {
	int a;
	double b;
	float c;
	
	cout<<"Enter an integer number: "<<endl;
	cin>>a;
	
	cout<<"Enter a double number: "<<endl;
	cin>>b;

	cout<<"Enter a float number: "<<endl;
	cin>>c;
    
	cout << a << " / " << b << " = " << floatingPointDivide<double>(a, b) <<endl;
    cout << a << " / " << c << " = "  << floatingPointDivide<double>(a, c) <<endl;
    cout << b << " / " << c << " = "  << floatingPointDivide<double>(b, c) <<endl;
	cout << c << " / " << b << " = " << floatingPointDivide<double>(c, b) <<endl;
	
    return 0;
}
