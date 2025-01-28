#include <iostream>
#include <cmath>
using namespace std;

template <typename T>
double EuclideanDistance(T x1, T y1, T x2, T y2) {
    return sqrt((pow(x2 - x1, 2) + pow(y2 - y1, 2)));
}

int main() {
    
    int x1, x2, y1, y2;
    cout<<"Enter x1: ";
    cin>>x1;

    cout<<"Enter x2: ";
    cin>>x2;
	
	cout<<"Enter y1: ";
    cin>>y1;	
	
	cout<<"Enter y2: ";
    cin>>y2;
	
	cout<<"The distance between ("<< x1 << ", " << y1 <<") and ("<< x2 << ", " << y2 <<") is: "
	<<EuclideanDistance<int>(x1, y1, x2, y2)<<endl;
	
	double X1, X2, Y1, Y2;
    cout<<"Enter X1: ";
    cin>>X1;

    cout<<"Enter X2: ";
    cin>>X2;
	
	cout<<"Enter Y1: ";
    cin>>Y1;	
	
	cout<<"Enter Y2: ";
    cin>>Y2;
	
	cout<<"The distance between ("<< X1 << ", " << Y1 <<") and ("<< X2 << ", " << Y2 <<") is: "
	<<EuclideanDistance<double>(X1, Y1, X2, Y2)<<endl;
    
	return 0;
}
